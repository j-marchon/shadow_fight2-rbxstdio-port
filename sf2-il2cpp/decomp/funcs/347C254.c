// Nekki.SF2.GUI.Dialogs.ItemSetDialog$$OnDestroy @ RVA 0x347C254

void Nekki_SF2_GUI_Dialogs_ItemSetDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_ItemSetDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  System_Action_Button__o **ppSVar4;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_List_Button__o *__this_00;
  System_Collections_IEnumerator_o *pSVar8;
  System_Action_Button__o *action;
  
  if ((DAT_04568358 & 1) == 0) {
    FUN_01bab630(&System_Action<Button>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>_ForEach__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_ItemSetDialog_<>c_NDHMHFKKIEH__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_ItemSetDialog_<>c_TypeInfo);
    DAT_04568358 = 1;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
    pPVar5 = pPVar2->klass;
    pSVar8 = (__this->fields).LKDFKLMLCBL;
    uVar1._0_1_ = (pPVar5->_2).rank;
    uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar3 = pPVar5->vtable + (*piVar7 + 1);
          goto LAB_0357c328;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_0357c328:
    (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
    __this_00 = (__this->fields).HFGPCJHGOCP;
    if ((Nekki_SF2_GUI_Dialogs_ItemSetDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action = Nekki_SF2_GUI_Dialogs_ItemSetDialog_<>c_TypeInfo->static_fields->__9__22_0;
    if (action == (System_Action_Button__o *)0x0) {
      if ((Nekki_SF2_GUI_Dialogs_ItemSetDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action = (System_Action_Button__o *)thunk_FUN_01bda818(System_Action<Button>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar4 = &Nekki_SF2_GUI_Dialogs_ItemSetDialog_<>c_TypeInfo->static_fields->__9__22_0;
      *ppSVar4 = action;
      thunk_FUN_01c20e04(ppSVar4,action);
    }
    if (__this_00 != (System_Collections_Generic_List_Button__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action
                 ,Method_System_Collections_Generic_List<Button>_ForEach__);
                    /* try { // try from 0357c3dc to 0367c6af has its CatchHandler @ 0357c3dc
                       catch() { ... } // from try @ 0357c3dc with catch @ 0357c3dc
                       catch() { ... } // from try @ 0357c89c with catch @ 0357c3dc
                       catch() { ... } // from try @ 0357ccb4 with catch @ 0357c3dc
                       catch() { ... } // from try @ 0357cd18 with catch @ 0357c3dc
                       catch() { ... } // from try @ 0357cd20 with catch @ 0357c3dc
                       catch() { ... } // from try @ 0357ce08 with catch @ 0357c3dc
                       catch() { ... } // from try @ 0357ce58 with catch @ 0357c3dc
                       catch() { ... } // from try @ 0357cf2c with catch @ 0357c3dc */
      (__this->fields).HFGPCJHGOCP = (System_Collections_Generic_List_Button__o *)0x0;
      thunk_FUN_01c20e04(&(__this->fields).HFGPCJHGOCP,0);
      Nekki_SF2_GUI_Dialogs_BaseDialog__OnDestroy
                ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

