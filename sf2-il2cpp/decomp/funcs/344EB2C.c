// Nekki.SF2.GUI.Menu.MenuEnergyPanel$$DKLDHKNAEBO @ RVA 0x344EB2C

void Nekki_SF2_GUI_Menu_MenuEnergyPanel__DKLDHKNAEBO
               (Nekki_SF2_GUI_Menu_MenuEnergyPanel_o *__this,MethodInfo *method)

{
  int32_t item;
  uint uVar1;
  long lVar2;
  int32_t iVar3;
  System_Collections_Generic_List_int__o *__this_00;
  StepBar_o *pSVar4;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Int32_array *pSVar5;
  ACHLOMELAJE_o *pAVar6;
  UnityEngine_UI_Button_o *pUVar7;
  UnityEngine_Events_UnityEvent_o *__this_02;
  int iVar8;
  float fVar9;
  
  if ((DAT_04568293 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<int>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuEnergyPanel_JOGNKBJCLPL__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04568293 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  iVar3 = MGNPHCAAEIO__OGPGFHNOCPN((MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_List_int__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
  System_Collections_Generic_List<int>___ctor
            (__this_00,Method_System_Collections_Generic_List<int>__ctor__);
  if (-1 < iVar3) {
    if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_0354edf0;
    iVar8 = 0;
    do {
      lVar2 = Method_System_Collections_Generic_List<int>_Add__;
      pSVar5 = (__this_00->fields)._items;
      fVar9 = (100.0 / (float)iVar3) * (float)iVar8;
      item = -0x80000000;
      if (fVar9 != INFINITY) {
        item = (int)fVar9;
      }
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pSVar5 == (System_Int32_array *)0x0) goto LAB_0354edf0;
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar5->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar5->m_Items[(int)uVar1] = item;
      }
      else {
        System_Collections_Generic_List<int>__AddWithResize
                  (__this_00,item,
                   *(MethodInfo_26C766C **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 <= iVar3);
  }
  pSVar4 = (__this->fields)._bar;
  if (pSVar4 != (StepBar_o *)0x0) {
    (*(pSVar4->klass->vtable)._6_Init.methodPtr)(pSVar4,(pSVar4->klass->vtable)._6_Init.method);
    pSVar4 = (__this->fields)._bar;
    if (pSVar4 != (StepBar_o *)0x0) {
      StepBar__SetPercent(pSVar4,__this_00,(MethodInfo *)0x0);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField != (ACHLOMELAJE_o *)0x0)
      {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar6 == (ACHLOMELAJE_o *)0x0) goto LAB_0354edf0;
        if ((pAVar6->fields).MMOJIJHAJJL != false) {
          pSVar4 = (__this->fields)._bar;
          if ((pSVar4 == (StepBar_o *)0x0) ||
             (__this_01 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pSVar4,(MethodInfo *)0x0),
             __this_01 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0354edf0;
          UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
        }
      }
      pUVar7 = (__this->fields)._dialogButton;
      if (pUVar7 != (UnityEngine_UI_Button_o *)0x0) {
        __this_02 = (UnityEngine_Events_UnityEvent_o *)(pUVar7->fields).m_OnClick;
        call = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_02 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(__this_02,call,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Menu_MenuEnergyPanel__UpdateView(__this,method_00);
          return;
        }
      }
    }
  }
LAB_0354edf0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

