# PerkinElmer Support

Here is where you should add your XISL SDK driver files.

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
