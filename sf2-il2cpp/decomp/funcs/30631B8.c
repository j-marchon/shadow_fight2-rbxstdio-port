// ACHLOMELAJE$$DGOECLPHNBN @ RVA 0x30631B8

bool ACHLOMELAJE__DGOECLPHNBN(ACHLOMELAJE_o *__this,BFBONKPKBNL_o *GMCFOKPADCA,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  int32_t iVar3;
  Il2CppObject *pIVar4;
  BNKBGIIJNLF_o *pBVar5;
  MethodInfo *method_00;
  System_Collections_Generic_List_BNKBGIIJNLF__o *__this_00;
  int index;
  
  if ((DAT_04565ee2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>_get_Item__);
    DAT_04565ee2 = 1;
  }
  if (GMCFOKPADCA != (BFBONKPKBNL_o *)0x0) {
    __this_00 = (GMCFOKPADCA->fields).MIOLFPIJMDH;
    if (__this_00 == (System_Collections_Generic_List_BNKBGIIJNLF__o *)0x0) {
LAB_031632b4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = (__this_00->fields)._size;
    if (0 < iVar1) {
      index = 0;
      do {
        method_00 = Method_System_Collections_Generic_List<BNKBGIIJNLF>_get_Item__;
        pIVar4 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,index,
                            (MethodInfo_26E4ADC *)
                            Method_System_Collections_Generic_List<BNKBGIIJNLF>_get_Item__);
        if (pIVar4 == (Il2CppObject *)0x0) goto LAB_031632b4;
        pBVar5 = ACHLOMELAJE__CJLEHKJCCBE(__this,(HBNENINHPGF_o *)pIVar4[1].klass,method_00);
        if (pBVar5 != (BNKBGIIJNLF_o *)0x0) {
          pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,index,
                              (MethodInfo_26E4ADC *)
                              Method_System_Collections_Generic_List<BNKBGIIJNLF>_get_Item__);
          if (pIVar4 == (Il2CppObject *)0x0) goto LAB_031632b4;
          iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                              &pIVar4[1].monitor,(MethodInfo *)0x0);
          iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (pBVar5->fields)._PKGCKALOMOF_k__BackingField.fields,(MethodInfo *)0x0)
          ;
          if (iVar3 < iVar2) {
            return false;
          }
        }
        index = index + 1;
      } while (iVar1 != index);
    }
  }
  return true;
}

