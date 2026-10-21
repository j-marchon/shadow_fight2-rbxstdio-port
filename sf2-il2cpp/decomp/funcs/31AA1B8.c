// FNGHHNDKDJB$$EPJKPLIOAKN @ RVA 0x31AA1B8

int32_t FNGHHNDKDJB__EPJKPLIOAKN
                  (System_Collections_Generic_List_FNGHHNDKDJB_GPIPBKLFMOI__o *GDKJAFIDNGF,
                  MethodInfo *method)

{
  int iVar1;
  Il2CppType *pIVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  System_Type_o *pSVar5;
  System_Type_o *pSVar6;
  Il2CppClass *pIVar7;
  
  if ((DAT_04566b2e & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_KIKGKKGDCKK<FNGHHNDKDJB_GPIPBKLFMOI>__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_EnchantDialog_var);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_ExitDialog_var);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_InputDialog_var);
    FUN_01bab630(&Method_System_Collections_Generic_List<FNGHHNDKDJB_GPIPBKLFMOI>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FNGHHNDKDJB_GPIPBKLFMOI>_get_Item__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialog_var);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidSimpleDialog_var);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog_var);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_SimpleDialog_var);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_TradeDialog_var);
    FUN_01bab630(&System_Type_TypeInfo);
    DAT_04566b2e = 1;
  }
  if (GDKJAFIDNGF != (System_Collections_Generic_List_FNGHHNDKDJB_GPIPBKLFMOI__o *)0x0) {
    if ((GDKJAFIDNGF->fields)._size < 2) {
      return 1;
    }
    pIVar4 = DJNBJHPDKDP__KIKGKKGDCKK<object>
                       ((System_Collections_Generic_List_T__o *)GDKJAFIDNGF,
                        Method_DJNBJHPDKDP_KIKGKKGDCKK<FNGHHNDKDJB_GPIPBKLFMOI>__);
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar7 = pIVar4[1].klass;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pIVar7,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar3) {
        return 1;
      }
      if (pIVar7 != (Il2CppClass *)0x0) {
        pSVar5 = System_Object__GetType((Il2CppObject *)pIVar7,(MethodInfo *)0x0);
        pIVar2 = Nekki_SF2_GUI_Dialogs_SimpleDialog_var;
        if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(System_Type_TypeInfo);
        }
        pSVar6 = System_Type__GetTypeFromHandle
                           ((System_RuntimeTypeHandle_o)pIVar2,(MethodInfo *)0x0);
        bVar3 = System_Type__op_Equality(pSVar5,pSVar6,(MethodInfo *)0x0);
        pIVar2 = Nekki_SF2_GUI_Dialogs_Raids_RaidSimpleDialog_var;
        if (!bVar3) {
          if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar6 = System_Type__GetTypeFromHandle
                             ((System_RuntimeTypeHandle_o)pIVar2,(MethodInfo *)0x0);
          bVar3 = System_Type__op_Equality(pSVar5,pSVar6,(MethodInfo *)0x0);
          pIVar2 = Nekki_SF2_GUI_Dialogs_Raids_InputDialog_var;
          if (!bVar3) {
            if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar6 = System_Type__GetTypeFromHandle
                               ((System_RuntimeTypeHandle_o)pIVar2,(MethodInfo *)0x0);
            bVar3 = System_Type__op_Equality(pSVar5,pSVar6,(MethodInfo *)0x0);
            pIVar2 = Nekki_SF2_GUI_Dialogs_ExitDialog_var;
            if (!bVar3) {
              if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pSVar6 = System_Type__GetTypeFromHandle
                                 ((System_RuntimeTypeHandle_o)pIVar2,(MethodInfo *)0x0);
              bVar3 = System_Type__op_Equality(pSVar5,pSVar6,(MethodInfo *)0x0);
              pIVar2 = Nekki_SF2_GUI_Dialogs_TradeDialog_var;
              if (!bVar3) {
                if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pSVar6 = System_Type__GetTypeFromHandle
                                   ((System_RuntimeTypeHandle_o)pIVar2,(MethodInfo *)0x0);
                bVar3 = System_Type__op_Equality(pSVar5,pSVar6,(MethodInfo *)0x0);
                pIVar2 = Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog_var;
                if (!bVar3) {
                    /* try { // try from 032aa430 to 033aa437 has its CatchHandler @ 032ab65c */
                  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                    /* try { // try from 032aa44c to 033aa453 has its CatchHandler @ 032ab658 */
                  pSVar6 = System_Type__GetTypeFromHandle
                                     ((System_RuntimeTypeHandle_o)pIVar2,(MethodInfo *)0x0);
                  bVar3 = System_Type__op_Equality(pSVar5,pSVar6,(MethodInfo *)0x0);
                  pIVar2 = Nekki_SF2_GUI_Dialogs_EnchantDialog_var;
                  if (!bVar3) {
                    /* try { // try from 032aa468 to 033aa473 has its CatchHandler @ 032ab64c */
                    if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    /* try { // try from 032aa488 to 033aa48f has its CatchHandler @ 032ab1a0 */
                    pSVar6 = System_Type__GetTypeFromHandle
                                       ((System_RuntimeTypeHandle_o)pIVar2,(MethodInfo *)0x0);
                    bVar3 = System_Type__op_Equality(pSVar5,pSVar6,(MethodInfo *)0x0);
                    if (!bVar3) {
                      iVar1 = (GDKJAFIDNGF->fields)._size;
                    /* try { // try from 032aa4bc to 033aa4c3 has its CatchHandler @ 032ab19c */
                      if (iVar1 < 2) {
                        return 1;
                      }
                      pIVar4 = System_Collections_Generic_List<object>__get_Item
                                         ((System_Collections_Generic_List_object__o *)GDKJAFIDNGF,
                                          iVar1 + -2,
                                          Method_System_Collections_Generic_List<FNGHHNDKDJB_GPIPBKLFMOI>_get_Item__
                                         );
                      if (pIVar4 != (Il2CppObject *)0x0) {
                        pIVar7 = pIVar4[1].klass;
                    /* try { // try from 032aa4e0 to 033aa4e7 has its CatchHandler @ 032ab0fc */
                        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
                        }
                        bVar3 = UnityEngine_Object__op_Inequality
                                          ((UnityEngine_Object_o *)pIVar7,
                                           (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                        if (!bVar3) {
                          return 1;
                        }
                        if (pIVar7 != (Il2CppClass *)0x0) {
                    /* try { // try from 032aa508 to 033aa517 has its CatchHandler @ 032aa7dc */
                          pSVar5 = System_Object__GetType((Il2CppObject *)pIVar7,(MethodInfo *)0x0);
                          pIVar2 = Nekki_SF2_GUI_Dialogs_LotteryDialog_var;
                          if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
                            thunk_FUN_01ba7564(System_Type_TypeInfo);
                          }
                          pSVar6 = System_Type__GetTypeFromHandle
                                             ((System_RuntimeTypeHandle_o)pIVar2,(MethodInfo *)0x0);
                          bVar3 = System_Type__op_Equality(pSVar5,pSVar6,(MethodInfo *)0x0);
                          if (!bVar3) {
                            return 1;
                          }
                          return 2;
                        }
                      }
                      goto LAB_032aa55c;
                    }
                  }
                }
              }
            }
          }
        }
        return 2;
      }
    }
  }
LAB_032aa55c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

