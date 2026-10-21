// ACHLOMELAJE$$OPKKKNLCACD @ RVA 0x30636FC

void ACHLOMELAJE__OPKKKNLCACD(ACHLOMELAJE_o *__this,BFBONKPKBNL_o *GMCFOKPADCA,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppObject *pIVar3;
  MethodInfo *in_x3;
  System_Collections_Generic_List_BNKBGIIJNLF__o *__this_00;
  int index;
  Il2CppClass *OAOLCGAIILM;
  
  if ((DAT_04565ee6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>_get_Item__);
    DAT_04565ee6 = 1;
  }
  if (GMCFOKPADCA == (BFBONKPKBNL_o *)0x0) {
    return;
  }
  __this_00 = (GMCFOKPADCA->fields).MIOLFPIJMDH;
  if (__this_00 != (System_Collections_Generic_List_BNKBGIIJNLF__o *)0x0) {
    iVar1 = (__this_00->fields)._size;
    if (0 < iVar1) {
      index = 0;
      do {
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,index,
                            Method_System_Collections_Generic_List<BNKBGIIJNLF>_get_Item__);
        if (pIVar3 == (Il2CppObject *)0x0) goto LAB_031637f0;
        OAOLCGAIILM = pIVar3[1].klass;
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,index,
                            Method_System_Collections_Generic_List<BNKBGIIJNLF>_get_Item__);
        if (pIVar3 == (Il2CppObject *)0x0) goto LAB_031637f0;
        iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                            &pIVar3[1].monitor,(MethodInfo *)0x0);
        ACHLOMELAJE__GHLNGBDFENI(__this,(HBNENINHPGF_o *)OAOLCGAIILM,-iVar2,in_x3);
        index = index + 1;
      } while (iVar1 != index);
    }
    CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this,false,(MethodInfo *)0x0);
    return;
  }
LAB_031637f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

