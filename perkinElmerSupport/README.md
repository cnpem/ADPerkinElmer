# PerkinElmer Support

Here is where you should add your XISL SDK driver files.

## Linux Instructions

Unpack the tarball compatible with your Linux distribution from the `Linux/`
folder of the XISL SDK.

Then, copy the XISL shared object files and their symbolic links to the
`linux-x86_64` directory:

```bash
cp -a /path/to/unpacked/tar/lib/lib*.so* ./os/linux-x86_64/
```

You should also copy additional libraries specific for your device if needed.
For instance, for detectors that need the XRD-FGe Opto PCI-Express frame
grabber, you need to also copy the `eleye500` library from
`lib_eleye_XRD_FGe_OPTO` to `./os/linux-x86_64/`.

## Windows Instructions

Copy the XISL SDK Windows library files from the `XISL` directory in the root
of the SDK. You should take the libraries compatible with your operating system
(32- or 64-bit) and detector. For instance, they should be taken from
`./XISL/win32/PCI_XRD_FGe_OPTO/` for Windows 32-bit and XRD-FGe Opto PCI frame
grabber:

```bash
cp /path/to/sdk/XISL/win32/PCI_XRD_FGe_OPTO/*.dll ./os/win32-x86/
```

It should contain `xisl.dll`, `xisl.lib` (for linking) and other DLLs specific
for your device (such as `eleye500.dll`, in this example).
