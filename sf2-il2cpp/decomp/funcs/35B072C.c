// Nekki.SF2.GUI.Common.BottomPanelScrollCell$$Init @ RVA 0x35B072C

void Nekki_SF2_GUI_Common_BottomPanelScrollCell__Init
               (Nekki_SF2_GUI_Common_BottomPanelScrollCell_o *__this,
               Nekki_SF2_GUI_Common_SectionButton_o *LGHOMHOPNEP,
               UnityEngine_Transform_o *DLCDCBEBBID,Nekki_SF2_GUI_SimpleScroll_o *MGFBPKIBNJI,
               float AKGBBEEOEOL,int32_t EDELKCIMEFH,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_SectionButton_o **ppNVar1;
  bool bVar2;
  Nekki_SF2_GUI_Common_SectionButton_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  UnityEngine_RectTransform_o *parent;
  UnityEngine_Events_UnityEvent_o *pUVar5;
  
                    /* catch() { ... } // from try @ 036b0318 with catch @ 036b0758
                       catch() { ... } // from try @ 036b0548 with catch @ 036b0758
                       try { // try from 036b0758 to 037b0773 has its CatchHandler @ 036aff80 */
                    /* catch() { ... } // from try @ 036b0304 with catch @ 036b075c
                       catch() { ... } // from try @ 036b0544 with catch @ 036b075c */
  if ((DAT_04568e9a & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanelScrollCell_OnClick__);
                    /* try { // try from 036b0774 to 037b078b has its CatchHandler @ 036b08a4 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 036b078c to 037b0893 has its CatchHandler @ 036aff80 */
    DAT_04568e9a = 1;
  }
  (__this->fields).PJCOPJPINFB = AKGBBEEOEOL;
  (__this->fields).OKBOFPMHCHG = EDELKCIMEFH;
  (__this->fields).BFPDBENNACC = DLCDCBEBBID;
  thunk_FUN_01c20e04(&(__this->fields).BFPDBENNACC,DLCDCBEBBID);
  (__this->fields).PDHMLFAMNCO = MGFBPKIBNJI;
  thunk_FUN_01c20e04(&(__this->fields).PDHMLFAMNCO,MGFBPKIBNJI);
  ppNVar1 = &(__this->fields).NMKFEDBLPGI;
  (__this->fields).NMKFEDBLPGI = LGHOMHOPNEP;
  thunk_FUN_01c20e04(ppNVar1,LGHOMHOPNEP);
  __this_00 = (__this->fields).NMKFEDBLPGI;
  if ((__this_00 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
    parent = (__this->fields).super._visibilityRoot;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)parent,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar2) {
      parent = (UnityEngine_RectTransform_o *)
               UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    }
    if ((*ppNVar1 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)*ppNVar1,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent
                (pUVar3,(UnityEngine_Transform_o *)parent,false,(MethodInfo *)0x0);
      if (*ppNVar1 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
        pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)*ppNVar1,(MethodInfo *)0x0);
        if (DAT_0455fa77 == '\0') {
          FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
          DAT_0455fa77 = '\x01';
        }
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                    /* try { // try from 036b0894 to 037b08a3 has its CatchHandler @ 036b08a4 */
                    /* catch() { ... } // from try @ 036b0774 with catch @ 036b08a4
                       catch() { ... } // from try @ 036b0894 with catch @ 036b08a4 */
                    /* try { // try from 036b08a8 to 037b08ab has its CatchHandler @ 036b08b4 */
          UnityEngine_Transform__set_localPosition
                    (pUVar3,(UnityEngine_Vector3_o)
                            (UnityEngine_Vector3_TypeInfo->static_fields->zeroVector).fields,
                     (MethodInfo *)0x0);
                    /* try { // try from 036b08ac to 037b08b7 has its CatchHandler @ 036aff80 */
          if (*ppNVar1 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
                    /* catch() { ... } // from try @ 036b06c4 with catch @ 036b08b4
                       catch() { ... } // from try @ 036b0700 with catch @ 036b08b4
                       catch() { ... } // from try @ 036b08a8 with catch @ 036b08b4 */
            pUVar5 = (UnityEngine_Events_UnityEvent_o *)
                     ((*ppNVar1)->fields).super.super.super.m_OnClick;
            pUVar4 = (UnityEngine_Events_UnityAction_o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
            UnityEngine_Events_UnityAction___ctor();
            if (pUVar5 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__RemoveListener(pUVar5,pUVar4,(MethodInfo *)0x0);
              if (*ppNVar1 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
                pUVar5 = (UnityEngine_Events_UnityEvent_o *)
                         ((*ppNVar1)->fields).super.super.super.m_OnClick;
                pUVar4 = (UnityEngine_Events_UnityAction_o *)
                         thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                UnityEngine_Events_UnityAction___ctor();
                if (pUVar5 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                  UnityEngine_Events_UnityEvent__AddListener(pUVar5,pUVar4,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

