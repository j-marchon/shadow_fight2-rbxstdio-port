// Nekki.SF2.GUI.Dialogs.EnchantDialog$$NEHDMDOKPPH @ RVA 0x31B6DE4

System_String_o *
Nekki_SF2_GUI_Dialogs_EnchantDialog__NEHDMDOKPPH
          (Nekki_SF2_GUI_Dialogs_EnchantDialog_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  int iVar2;
  int32_t iVar3;
  System_Text_StringBuilder_o *__this_00;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  MethodInfo *extraout_x1;
  KHEFDKCCDJL_o *pKVar6;
  BFBONKPKBNL_o *pBVar7;
  System_Collections_Generic_List_BNKBGIIJNLF__o *__this_01;
  int index;
  Il2CppObject *arg0;
  void *local_70;
  Il2CppClass *pIStack_68;
  
  if ((DAT_04566bba & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>_get_Item__);
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_2450);
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_2484);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566bba = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Text_StringBuilder_o *)
              thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  pKVar6 = (__this->fields).KDAABAPIIEP;
  if (((pKVar6 != (KHEFDKCCDJL_o *)0x0) &&
      (pBVar7 = (pKVar6->fields)._DGKHEMIDIFL_k__BackingField, pBVar7 != (BFBONKPKBNL_o *)0x0)) &&
     (__this_01 = (pBVar7->fields).MIOLFPIJMDH,
     __this_01 != (System_Collections_Generic_List_BNKBGIIJNLF__o *)0x0)) {
    iVar2 = (__this_01->fields)._size;
    if (0 < iVar2) {
      index = 0;
      do {
        pIVar4 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_01,index,
                            Method_System_Collections_Generic_List<BNKBGIIJNLF>_get_Item__);
        if (pIVar4 == (Il2CppObject *)0x0) goto LAB_032b6fec;
        iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                            &pIVar4[1].monitor,(MethodInfo *)0x0);
        if (0 < iVar3) {
          pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_01,index,
                              Method_System_Collections_Generic_List<BNKBGIIJNLF>_get_Item__);
          if ((pIVar4 == (Il2CppObject *)0x0) || (pIVar4[1].klass == (Il2CppClass *)0x0))
          goto LAB_032b6fec;
          arg0 = ((pIVar4[1].klass)->_1).byval_arg.data;
          pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_01,index,
                              Method_System_Collections_Generic_List<BNKBGIIJNLF>_get_Item__);
          if (pIVar4 == (Il2CppObject *)0x0) goto LAB_032b6fec;
          local_70 = pIVar4[1].monitor;
          pIStack_68 = pIVar4[2].klass;
          pIVar4 = (Il2CppObject *)
                   thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                      &local_70);
          if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_032b6fec;
          puVar1 = &StringLiteral_167;
          if (iVar2 + -1 <= index) {
            puVar1 = &StringLiteral_1;
          }
          System_Text_StringBuilder__AppendFormat
                    (__this_00,StringLiteral_2450,arg0,pIVar4,(Il2CppObject *)*puVar1,
                     (MethodInfo *)0x0);
        }
        index = index + 1;
      } while (iVar2 != index);
    }
    if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
      iVar3 = System_Text_StringBuilder__get_Length(__this_00,(MethodInfo *)0x0);
      if (0 < iVar3) {
        System_Text_StringBuilder__Append(__this_00,StringLiteral_2484,(MethodInfo *)0x0);
      }
      pSVar5 = (System_String_o *)
               (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                         (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      return pSVar5;
    }
  }
LAB_032b6fec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

