// Nekki.SF2.GUI.Dialogs.ItemSetDialog$$GKJKNKCEMPN @ RVA 0x347C5BC

void Nekki_SF2_GUI_Dialogs_ItemSetDialog__GKJKNKCEMPN
               (Nekki_SF2_GUI_Dialogs_ItemSetDialog_o *__this,
               Nekki_SF2_GUI_ResolutionImage_o *IKKAMAMLIKA,HOOAAGABMBL_o *DKMMBMBMJBO,
               float JKOJPEKLBCI,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool value;
  Il2CppObject *__this_00;
  long *plVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  GGHCLMEFIGO_o *__this_01;
  IGFGDDANEPE_o *pIVar6;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_UI_Button_o *item;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_03;
  UnityEngine_Events_UnityAction_o *call;
  System_Collections_Generic_List_Button__o *__this_04;
  HHKELHDGPDO_o *pHVar7;
  ACHLOMELAJE_o *pAVar8;
  UnityEngine_UI_Button_array *pUVar9;
  void **ppvVar10;
  UnityEngine_Events_UnityEvent_o *__this_05;
  float CJNHFNHJHPE;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o UVar12;
  
  if ((DAT_0456835c & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<Button>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_ItemSetDialog_EPLOHOAMMND_LLKEKIALGPM__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_ItemSetDialog_EPLOHOAMMND_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>_Add__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_0456835c = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_ItemSetDialog_EPLOHOAMMND_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) goto LAB_0357c964;
  __this_00[1].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 1,__this);
  ppvVar10 = &__this_00[1].monitor;
  *ppvVar10 = IKKAMAMLIKA;
  thunk_FUN_01c20e04(ppvVar10,IKKAMAMLIKA);
  pIVar6 = (IGFGDDANEPE_o *)0x0;
  if (DKMMBMBMJBO != (HOOAAGABMBL_o *)0x0) {
    if (*ppvVar10 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0357c964;
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName
              (*ppvVar10,(DKMMBMBMJBO->fields)._GPEFIOMJHNN_k__BackingField,(MethodInfo *)0x0);
    plVar3 = *ppvVar10;
    if (plVar3 == (long *)0x0) goto LAB_0357c964;
                    /* try { // try from 0357c6b0 to 0367c6d7 has its CatchHandler @ 0357ce94 */
    (**(code **)(*plVar3 + 0x408))(plVar3,*(undefined8 *)(*plVar3 + 0x410));
    if ((*ppvVar10 == (UnityEngine_UI_Graphic_o *)0x0) ||
       (pUVar4 = UnityEngine_UI_Graphic__get_rectTransform(*ppvVar10,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_0357c964;
    UVar11 = UnityEngine_Transform__get_localScale
                       ((UnityEngine_Transform_o *)pUVar4,(MethodInfo *)0x0);
    if (*ppvVar10 == (UnityEngine_UI_Graphic_o *)0x0) goto LAB_0357c964;
    pUVar4 = UnityEngine_UI_Graphic__get_rectTransform(*ppvVar10,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalScale
              ((UnityEngine_Transform_o *)pUVar4,JKOJPEKLBCI,(MethodInfo *)0x0);
    pHVar7 = (__this->fields).PAAIEEFEBKK;
    if (pHVar7 == (HHKELHDGPDO_o *)0x0) goto LAB_0357c964;
    if ((pHVar7->fields).EJGIHLJGJKC == false) {
      pIVar6 = (IGFGDDANEPE_o *)0x0;
    }
    else {
      if ((*ppvVar10 == (UnityEngine_Component_o *)0x0) ||
         (pUVar5 = UnityEngine_Component__get_transform(*ppvVar10,(MethodInfo *)0x0),
         pUVar5 == (UnityEngine_Transform_o *)0x0)) goto LAB_0357c964;
                    /* try { // try from 0357c714 to 0367c73b has its CatchHandler @ 0357ce90 */
      pUVar5 = UnityEngine_Transform__GetChild(pUVar5,0,(MethodInfo *)0x0);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
      }
      if (DAT_04565b7d == '\0') {
                    /* try { // try from 0357c750 to 0367c757 has its CatchHandler @ 0357ce8c */
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
                    /* try { // try from 0357c760 to 0367c767 has its CatchHandler @ 0357ce80 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 0357c778 to 0367c77f has its CatchHandler @ 0357ce84 */
      pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* try { // try from 0357c784 to 0367c78b has its CatchHandler @ 0357ce5c */
      if (((pAVar8 == (ACHLOMELAJE_o *)0x0) ||
          (__this_01 = (pAVar8->fields).OIDPLCLELEN, __this_01 == (GGHCLMEFIGO_o *)0x0)) ||
         (pIVar6 = GGHCLMEFIGO__JNFIBDBHNOA(__this_01,DKMMBMBMJBO,(MethodInfo *)0x0),
         pUVar5 == (UnityEngine_Transform_o *)0x0)) goto LAB_0357c964;
                    /* try { // try from 0357c79c to 0367c7a3 has its CatchHandler @ 0357ce88 */
                    /* try { // try from 0357c7a4 to 0367c7b7 has its CatchHandler @ 0357ce68 */
      __this_02 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
      if (pIVar6 == (IGFGDDANEPE_o *)0x0) {
        value = false;
      }
      else {
        value = (pIVar6->fields).OFIKEBGDMBE != false;
      }
                    /* try { // try from 0357c7cc to 0367c7d3 has its CatchHandler @ 0357ce6c */
      if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto LAB_0357c964;
      UnityEngine_GameObject__SetActive(__this_02,value,(MethodInfo *)0x0);
                    /* try { // try from 0357c7e0 to 0367c7ef has its CatchHandler @ 0357ce74 */
      UnityEngine_TransformExtensions__SetLocalScale(pUVar5,1.0 / JKOJPEKLBCI,(MethodInfo *)0x0);
      UVar12 = UnityEngine_Transform__get_localPosition(pUVar5,(MethodInfo *)0x0);
                    /* try { // try from 0357c800 to 0367c817 has its CatchHandler @ 0357ce70 */
      UnityEngine_TransformExtensions__SetLocalPositionY
                (pUVar5,(UVar11.fields.y * UVar12.fields.y) / JKOJPEKLBCI,(MethodInfo *)0x0);
      if (*ppvVar10 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0357c964;
      CJNHFNHJHPE = 0.5;
      if (pIVar6 != (IGFGDDANEPE_o *)0x0) {
        CJNHFNHJHPE = 1.0;
      }
      Nekki_SF2_GUI_ResolutionImage__set_Alpha(*ppvVar10,CJNHFNHJHPE,(MethodInfo *)0x0);
    }
  }
                    /* try { // try from 0357c828 to 0367c837 has its CatchHandler @ 0357cdec */
  pHVar7 = (__this->fields).PAAIEEFEBKK;
  if (pHVar7 != (HHKELHDGPDO_o *)0x0) {
    if ((pIVar6 != (IGFGDDANEPE_o *)0x0) || ((pHVar7->fields).EJGIHLJGJKC == false)) {
      return;
    }
    if (((*ppvVar10 != (UnityEngine_Component_o *)0x0) &&
        (item = (UnityEngine_UI_Button_o *)
                UnityEngine_Component__GetComponent<object>
                          (*ppvVar10,Method_UnityEngine_Component_GetComponent<Button>__),
        item != (UnityEngine_UI_Button_o *)0x0)) &&
       (__this_03 = (item->fields).m_OnClick,
       __this_03 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)__this_03,(MethodInfo *)0x0);
      __this_05 = (UnityEngine_Events_UnityEvent_o *)(item->fields).m_OnClick;
                    /* try { // try from 0357c878 to 0367c89b has its CatchHandler @ 0357ce58 */
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
                    /* try { // try from 0357c89c to 0367c95f has its CatchHandler @ 0357c3dc */
      if (__this_05 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(__this_05,call,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<Button>_Add__;
        __this_04 = (__this->fields).HFGPCJHGOCP;
        if (__this_04 != (System_Collections_Generic_List_Button__o *)0x0) {
          pUVar9 = (__this_04->fields)._items;
          (__this_04->fields)._version = (__this_04->fields)._version + 1;
          if (pUVar9 != (UnityEngine_UI_Button_array *)0x0) {
            uVar1 = (__this_04->fields)._size;
            if (uVar1 < (uint)pUVar9->max_length) {
              (__this_04->fields)._size = uVar1 + 1;
              pUVar9->m_Items[(int)uVar1] = item;
              thunk_FUN_01c20e04(pUVar9->m_Items + (int)uVar1,item);
              return;
            }
                    /* try { // try from 0357c960 to 0367c967 has its CatchHandler @ 0357cdf4 */
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_04,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            return;
          }
        }
      }
    }
  }
LAB_0357c964:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

