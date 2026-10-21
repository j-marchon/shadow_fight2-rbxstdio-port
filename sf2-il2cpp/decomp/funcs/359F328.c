// Nekki.Utils.RaidBetaLogger$$FEKPMMPNPBD @ RVA 0x359F328

bool Nekki_Utils_RaidBetaLogger__FEKPMMPNPBD
               (Nekki_Utils_RaidBetaLogger_o *__this,Ionic_Zip_ZipFile_o *KBDIFEEOCOM,
               System_String_o *KGLJICLJHEL,System_String_o *DNOPBOLEJBC,MethodInfo *method)

{
  bool bVar1;
  System_String_o *content;
  
                    /* try { // try from 0369f33c to 0379f3eb has its CatchHandler @ 0369f33c
                       catch() { ... } // from try @ 0369f33c with catch @ 0369f33c
                       catch() { ... } // from try @ 0369f430 with catch @ 0369f33c
                       catch() { ... } // from try @ 0369f474 with catch @ 0369f33c
                       catch() { ... } // from try @ 0369f4a0 with catch @ 0369f33c
                       catch() { ... } // from try @ 0369f4d8 with catch @ 0369f33c */
  bVar1 = NEHNBJKKABI__HALDCNGHJCO(DNOPBOLEJBC,(MethodInfo *)0x0);
  if (bVar1) {
    content = System_IO_File__ReadAllText(DNOPBOLEJBC,(MethodInfo *)0x0);
    if (KBDIFEEOCOM == (Ionic_Zip_ZipFile_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Ionic_Zip_ZipFile__AddEntry(KBDIFEEOCOM,KGLJICLJHEL,content,(MethodInfo *)0x0);
  }
  return bVar1;
}

