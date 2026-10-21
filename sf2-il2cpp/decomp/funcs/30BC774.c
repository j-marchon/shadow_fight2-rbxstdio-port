// Nekki.SF2.GUI.Common.SceneMenuScroll$$GIENGNEGHPJ @ RVA 0x30BC774

void Nekki_SF2_GUI_Common_SceneMenuScroll__GIENGNEGHPJ
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_RectTransform_o *pUVar2;
  Nekki_SF2_GUI_Common_SceneSelector_o *__this_00;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar3;
  System_Action_T0__T1__T2__o *PKKMGBOIDJD;
  System_Enum_o *NCPANDOCILC;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_SceneSelector__o *pSVar4;
  JPGJLKENNCC_o *__this_02;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Vector2_o UVar6;
  UnityEngine_Vector2_o UVar7;
  UnityEngine_Vector2_o UVar8;
  undefined4 local_44;
  
                    /* try { // try from 031bc780 to 032bc797 has its CatchHandler @ 031bc878 */
                    /* try { // try from 031bc798 to 032bc867 has its CatchHandler @ 031bc6f0 */
  if ((DAT_0456624c & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
    FUN_01bab630(&HHNIGLIDHLK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<SceneSelector>_get_Count__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_SceneMenuScroll_GKHAKLDEIJI__);
    FUN_01bab630(&Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo);
    DAT_0456624c = 1;
  }
  Nekki_SF2_GUI_UIModule__GIENGNEGHPJ((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo->static_fields->CNMHHKAMGPI = __this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo->static_fields,__this);
  Nekki_SF2_GUI_Common_SceneMenuScroll__BCCNAFAOOPB(__this,method_00);
  Nekki_SF2_GUI_Common_SceneMenuScroll__JHJLELACELF(__this,method_01);
  pUVar2 = (__this->fields)._Scroll;
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    UVar5 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._RollLeft;
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      UVar6 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._RollRight;
      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 031bc868 to 032bc877 has its CatchHandler @ 031bc878 */
        UVar7 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._Scroll;
                    /* catch() { ... } // from try @ 031bc780 with catch @ 031bc878
                       catch() { ... } // from try @ 031bc868 with catch @ 031bc878 */
        (__this->fields).JCJGBLBKEID.fields.x = UVar5.fields.x;
        (__this->fields).JCJGBLBKEID.fields.y = UVar6.fields.y + UVar7.fields.y;
                    /* try { // try from 031bc87c to 032bc87f has its CatchHandler @ 031bc888 */
        if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 031bc880 to 032bc88b has its CatchHandler @ 031bc6f0 */
          UVar5 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031bc87c with catch @ 031bc888
                        */
          __this_00 = (__this->fields).NFFFEDGMBIL;
                    /* try { // try from 031bc88c to 032bc90f has its CatchHandler @ 031bc88c
                       catch() { ... } // from try @ 031bc88c with catch @ 031bc88c
                       catch() { ... } // from try @ 031bc9e4 with catch @ 031bc88c
                       catch() { ... } // from try @ 031bca30 with catch @ 031bc88c
                       catch() { ... } // from try @ 031bcb18 with catch @ 031bc88c */
          if ((__this_00 != (Nekki_SF2_GUI_Common_SceneSelector_o *)0x0) &&
             (pUVar2 = (UnityEngine_RectTransform_o *)
                       UnityEngine_Component__GetComponent<object>
                                 ((UnityEngine_Component_o *)__this_00,
                                  Method_UnityEngine_Component_GetComponent<RectTransform>__),
             pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
            UVar6 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
            pSVar4 = (__this->fields).FGIFPAPGJJN;
            if ((pSVar4 != (System_Collections_Generic_List_SceneSelector__o *)0x0) &&
               (pUVar2 = (__this->fields)._RollLeft, pUVar2 != (UnityEngine_RectTransform_o *)0x0))
            {
              iVar1 = (pSVar4->fields)._size;
              UVar7 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
              pUVar2 = (__this->fields)._RollRight;
              if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                UVar8 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
                pUVar2 = (__this->fields)._Scroll;
                (__this->fields).JNJNEIDIPEM.fields.x = UVar5.fields.x;
                (__this->fields).JNJNEIDIPEM.fields.y =
                     UVar6.fields.y * (float)iVar1 + UVar7.fields.y + UVar8.fields.y;
                if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_sizeDelta
                            (pUVar2,(UnityEngine_Vector2_o)(__this->fields).JCJGBLBKEID.fields,
                             (MethodInfo *)0x0);
                    /* try { // try from 031bc910 to 032bc917 has its CatchHandler @ 031bc9f8 */
                  pNVar3 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
                  if (pNVar3 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
                    /* try { // try from 031bc91c to 032bc923 has its CatchHandler @ 031bc9f4 */
                    __this_02 = (pNVar3->fields).GMLEPHMBMPD;
                    PKKMGBOIDJD = (System_Action_T0__T1__T2__o *)
                                  thunk_FUN_01bda818(
                                                  System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo
                                                  );
                    /* try { // try from 031bc940 to 032bc943 has its CatchHandler @ 031bc9fc */
                    /* try { // try from 031bc944 to 032bc953 has its CatchHandler @ 031bca00 */
                    System_Action<Int32Enum,_int,_Int32Enum>___ctor();
                    local_44 = 0;
                    NCPANDOCILC = (System_Enum_o *)
                                  thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_44);
                    if (__this_02 != (JPGJLKENNCC_o *)0x0) {
                    /* try { // try from 031bc964 to 032bc967 has its CatchHandler @ 031bc9f8 */
                    /* try { // try from 031bc968 to 032bc97f has its CatchHandler @ 031bc9f0 */
                      FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__MDDFPBJBKPM
                                ((FMKGOOONJKB_T0__T1__T2__o *)__this_02,PKKMGBOIDJD,NCPANDOCILC,
                                 Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
                    /* try { // try from 031bc980 to 032bc987 has its CatchHandler @ 031bc9ec */
                      __this_01 = UnityEngine_Component__get_gameObject
                                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 031bc98c to 032bc9a7 has its CatchHandler @ 031bc9e8 */
                      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
                        UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
                    /* try { // try from 031bc9ac to 032bc9e3 has its CatchHandler @ 031bc9e4 */
                        return;
                      }
                    }
                  }
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

