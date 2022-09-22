#!/usr/bin/env zxpp

import path from "path";
import fs from "fs";
import { processArguments } from "./processArguments";
import { PNG } from "pngjs";
import { safeWriteFileSync } from "./safeWriteFileSync";
import { rgbToHex } from "./rgbToHex";

const { inputPath, outputPath } = processArguments();

const inputDir = await fs.promises.readdir(inputPath);

const inputFiles = inputDir.map((filePath) => path.join(process.cwd(), inputPath, filePath));

for (const filePath of inputFiles) {
    const fileName = path.parse(filePath).name;

    fs.createReadStream(filePath)
        .pipe(new PNG())
        .on("parsed", function () {
            const length = this.width * this.height;
            // TODO fix image generation
            let output = `const unsigned short ${fileName}[${length}] = {\n`;

            for (let y = 0; y < this.height; y++) {
                output += "\t";

                for (let x = 0; x < this.width; x++) {
                    const index = (this.width * y + x) << 2;

                    const r = this.data[index],
                        g = this.data[index + 1],
                        b = this.data[index + 2];

                    const hex = rgbToHex(r, g, b);

                    output += `0x${hex},`;
                }

                output += "\n";
            }

            output += "};\n";

            safeWriteFileSync(path.join(outputPath, `${fileName}.h`), output);
        });
}