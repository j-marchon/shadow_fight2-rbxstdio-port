// JMDPBFOCHHP.<>c$$DGLOHKJKCOA @ RVA 0x2FFC1EC

bool JMDPBFOCHHP_<>c__DGLOHKJKCOA
               (JMDPBFOCHHP___c_o *__this,Ionic_Zip_ZipEntry_o *entry,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04565ae5 & 1) == 0) {
    __this = (JMDPBFOCHHP___c_o *)FUN_01bab630(&StringLiteral_20411);
    DAT_04565ae5 = 1;
  }
  if (entry != (Ionic_Zip_ZipEntry_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((entry->fields)._FileNameInArchive,StringLiteral_20411,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

