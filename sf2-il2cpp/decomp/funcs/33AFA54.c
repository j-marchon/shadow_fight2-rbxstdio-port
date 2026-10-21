// Nekki.SF2.GUI.Dialogs.BaseDialog$$LCGFJKFJKJK @ RVA 0x33AFA54

void Nekki_SF2_GUI_Dialogs_BaseDialog__LCGFJKFJKJK
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,int32_t DNBBBGEENMM,MethodInfo *method)

{
  int32_t length;
  uint uVar1;
  long lVar2;
  bool bVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  System_Collections_Generic_List_Button__o *pSVar6;
  UnityEngine_UI_Button_array *pUVar7;
  LabelButton_o *pLVar8;
  float fVar9;
  UnityEngine_Rect_o UVar10;
  
  if ((DAT_04567d3e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>_Clear__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567d3e = 1;
  }
  pSVar6 = (__this->fields).EHGPDKENGAP;
  if (pSVar6 == (System_Collections_Generic_List_Button__o *)0x0) goto LAB_034afd50;
  length = (pSVar6->fields)._size;
  (pSVar6->fields)._size = 0;
  (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,length,(MethodInfo *)0x0);
  }
  pLVar8 = (__this->fields)._btnOK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pLVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if ((DNBBBGEENMM | 2U) == 3) {
      (*(__this->klass->vtable)._15_ACICKHKFILK.methodPtr)
                (__this,(__this->fields)._btnOK,1,(__this->klass->vtable)._15_ACICKHKFILK.method);
      pLVar8 = (__this->fields)._btnOK;
      if (pLVar8 == (LabelButton_o *)0x0) goto LAB_034afd50;
      pUVar4 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pLVar8,(MethodInfo *)0x0);
      fVar9 = 0.0;
      if (DNBBBGEENMM == 3) {
        pLVar8 = (__this->fields)._btnOK;
        if (pLVar8 == (LabelButton_o *)0x0) goto LAB_034afd50;
        UVar10 = LabelButton__get_rect(pLVar8,(MethodInfo *)0x0);
        fVar9 = UVar10.fields.m_Width * 0.5 + 32.0;
      }
      UnityEngine_TransformExtensions__SetLocalPositionX(pUVar4,fVar9,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<Button>_Add__;
                    /* try { // try from 034afb74 to 035afb9b has its CatchHandler @ 034afda0 */
      pSVar6 = (__this->fields).EHGPDKENGAP;
      if (pSVar6 == (System_Collections_Generic_List_Button__o *)0x0) goto LAB_034afd50;
      pLVar8 = (__this->fields)._btnOK;
      pUVar7 = (pSVar6->fields)._items;
      (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
      if (pUVar7 == (UnityEngine_UI_Button_array *)0x0) goto LAB_034afd50;
      uVar1 = (pSVar6->fields)._size;
      if (uVar1 < (uint)pUVar7->max_length) {
        (pSVar6->fields)._size = uVar1 + 1;
        pUVar7->m_Items[(int)uVar1] = (UnityEngine_UI_Button_o *)pLVar8;
        thunk_FUN_01c20e04(pUVar7->m_Items + (int)uVar1);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pLVar8,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
    }
    else {
      pLVar8 = (__this->fields)._btnOK;
                    /* try { // try from 034afbd0 to 035afbfb has its CatchHandler @ 034afd9c */
      if ((pLVar8 == (LabelButton_o *)0x0) ||
         (pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar8,(MethodInfo *)0x0),
         pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_034afd50;
      UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
    }
  }
  pLVar8 = (__this->fields)._btnCancel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pLVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pLVar8 = (__this->fields)._btnCancel;
                    /* try { // try from 034afc30 to 035afc3b has its CatchHandler @ 034afd90 */
    if ((DNBBBGEENMM & 0xfffffffeU) == 2) {
                    /* try { // try from 034afc4c to 035afcbf has its CatchHandler @ 034afd98 */
      (*(__this->klass->vtable)._15_ACICKHKFILK.methodPtr)
                (__this,pLVar8,2,(__this->klass->vtable)._15_ACICKHKFILK.method);
      pLVar8 = (__this->fields)._btnCancel;
      if (pLVar8 != (LabelButton_o *)0x0) {
        pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pLVar8,(MethodInfo *)0x0);
        fVar9 = 0.0;
        if (DNBBBGEENMM == 3) {
          pLVar8 = (__this->fields)._btnCancel;
          if (pLVar8 == (LabelButton_o *)0x0) goto LAB_034afd50;
          UVar10 = LabelButton__get_rect(pLVar8,(MethodInfo *)0x0);
          fVar9 = -(UVar10.fields.m_Width * 0.5 + 32.0);
        }
        UnityEngine_TransformExtensions__SetLocalPositionX(pUVar4,fVar9,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<Button>_Add__;
        pSVar6 = (__this->fields).EHGPDKENGAP;
        if (pSVar6 != (System_Collections_Generic_List_Button__o *)0x0) {
          pLVar8 = (__this->fields)._btnCancel;
          pUVar7 = (pSVar6->fields)._items;
                    /* try { // try from 034afcc0 to 035afd5f has its CatchHandler @ 034afa24 */
          (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
          if (pUVar7 != (UnityEngine_UI_Button_array *)0x0) {
            uVar1 = (pSVar6->fields)._size;
            if (uVar1 < (uint)pUVar7->max_length) {
              (pSVar6->fields)._size = uVar1 + 1;
              pUVar7->m_Items[(int)uVar1] = (UnityEngine_UI_Button_o *)pLVar8;
              thunk_FUN_01c20e04(pUVar7->m_Items + (int)uVar1);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pLVar8,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            goto LAB_034afd30;
          }
        }
      }
    }
    else if ((pLVar8 != (LabelButton_o *)0x0) &&
            (pUVar5 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pLVar8,(MethodInfo *)0x0),
            pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
      goto LAB_034afd30;
    }
LAB_034afd50:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_034afd30:
                    /* WARNING: Could not recover jumptable at 0x034afd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._21_IGDDKJJMDLP.methodPtr)
            (__this,(__this->klass->vtable)._21_IGDDKJJMDLP.method);
  return;
}

