// JMDPBFOCHHP.GIIEJKGFDPL$$LFENGGKOJDO @ RVA 0x2FFB9B8

void JMDPBFOCHHP_GIIEJKGFDPL__LFENGGKOJDO
               (JMDPBFOCHHP_GIIEJKGFDPL_o *__this,JMDPBFOCHHP_NFKNNOPFJEE_o *HLDACJIELGJ,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if ((DAT_04565adf & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_NFKNNOPFJEE>_set_Item__
                );
    DAT_04565adf = 1;
  }
  if ((HLDACJIELGJ != (JMDPBFOCHHP_NFKNNOPFJEE_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (__this->fields).APLBLNHJCMP,
     __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    System_Collections_Generic_Dictionary<object,_object>__set_Item
              (__this_00,(Il2CppObject *)(HLDACJIELGJ->fields).NPGIJEJKNKO,
               (Il2CppObject *)HLDACJIELGJ,
               Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_NFKNNOPFJEE>_set_Item__
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

