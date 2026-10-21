// JMDPBFOCHHP.<>c$$BJDFMJMEIGJ @ RVA 0x2FFC2B0

bool JMDPBFOCHHP_<>c__BJDFMJMEIGJ
               (JMDPBFOCHHP___c_o *__this,Ionic_Zip_ZipEntry_o *entry,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04565ae7 & 1) == 0) {
    __this = (JMDPBFOCHHP___c_o *)FUN_01bab630(&StringLiteral_20410);
    DAT_04565ae7 = 1;
  }
  if (entry != (Ionic_Zip_ZipEntry_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((entry->fields)._FileNameInArchive,StringLiteral_20410,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

