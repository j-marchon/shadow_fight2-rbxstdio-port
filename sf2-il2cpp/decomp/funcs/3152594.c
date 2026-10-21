// Nekki.SF2.GUI.Dialogs.StrangerBigDialog$$BDDKKBAOAMO @ RVA 0x3152594

void Nekki_SF2_GUI_Dialogs_StrangerBigDialog__BDDKKBAOAMO
               (Nekki_SF2_GUI_Dialogs_StrangerBigDialog_o *__this,float JGMCOMCBLPG,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  Il2CppObject *original;
  UnityEngine_Transform_o *parent;
  ProfitViewer_o *__this_00;
  System_String_o *OOKEKJMFKPE;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector2_o UVar5;
  
  if ((DAT_04566817 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ProfitViewer>__);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<GameObject>__);
    FUN_01bab630(&StringLiteral_10397);
    FUN_01bab630(&StringLiteral_10510);
    FUN_01bab630(&StringLiteral_10457);
    DAT_04566817 = 1;
  }
  pUVar2 = (__this->fields).super.super._footerTextsSprite;
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pUVar2 = (__this->fields).super.super._footerTextsSprite;
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionY(pUVar3,JGMCOMCBLPG,(MethodInfo *)0x0);
      bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).super.JIFBFBEEBDB,(MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
      pUVar2 = (__this->fields).super.super._footerTextsSprite;
      if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_Transform_o *)0x0)) {
        pUVar3 = UnityEngine_Transform__Find(pUVar3,StringLiteral_10457,(MethodInfo *)0x0);
                    /* try { // try from 032526a0 to 033526af has its CatchHandler @ 032526b0 */
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03252334 with catch @ 032526b0
                       catch() { ... } // from try @ 032526a0 with catch @ 032526b0 */
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
                    /* try { // try from 032526b4 to 033526b7 has its CatchHandler @ 032526c0 */
                    /* try { // try from 032526b8 to 033526c3 has its CatchHandler @ 0325225c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032526b4 with catch @ 032526c0
                        */
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
                    /* try { // try from 032526c4 to 0335270f has its CatchHandler @ 032526c4
                       catch() { ... } // from try @ 032526c4 with catch @ 032526c4
                       catch() { ... } // from try @ 03252744 with catch @ 032526c4
                       catch() { ... } // from try @ 03252794 with catch @ 032526c4
                       catch() { ... } // from try @ 032529c4 with catch @ 032526c4
                       catch() { ... } // from try @ 032529d0 with catch @ 032526c4 */
        if (!bVar1) {
          return;
        }
        original = UnityEngine_Resources__Load<object>
                             (StringLiteral_10397,Method_UnityEngine_Resources_Load<GameObject>__);
        pUVar2 = (__this->fields).super.super._footerTextsSprite;
        if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
          parent = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03252710 to 03352713 has its CatchHandler @ 0325275c */
            thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
          }
                    /* try { // try from 03252720 to 0335272b has its CatchHandler @ 03252764 */
          pUVar2 = (UnityEngine_GameObject_o *)
                   UnityEngine_Object__Instantiate<object>
                             (original,parent,Method_UnityEngine_Object_Instantiate<GameObject>__);
          if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
                    /* try { // try from 0325273c to 03352743 has its CatchHandler @ 03252760 */
            __this_00 = (ProfitViewer_o *)
                        UnityEngine_GameObject__GetComponent<object>
                                  (pUVar2,Method_UnityEngine_GameObject_GetComponent<ProfitViewer>__
                                  );
                    /* try { // try from 03252744 to 0335277b has its CatchHandler @ 032526c4 */
            if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03252710 with catch @ 0325275c
                        */
              thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo);
            }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0325273c with catch @ 03252760
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03252720 with catch @ 03252764
                        */
            OOKEKJMFKPE = MGENAMAJALB__OPLAHNAJGAJ((MethodInfo *)0x0);
                    /* try { // try from 0325277c to 03352793 has its CatchHandler @ 032529c8 */
            if ((__this_00 != (ProfitViewer_o *)0x0) &&
               (ProfitViewer__Init(__this_00,OOKEKJMFKPE,(__this->fields).super.JIFBFBEEBDB,
                                   StringLiteral_10510,(MethodInfo *)0x0),
               pUVar3 != (UnityEngine_Transform_o *)0x0)) {
                    /* try { // try from 03252794 to 033529b3 has its CatchHandler @ 032526c4 */
              __this_01 = (UnityEngine_RectTransform_o *)
                          UnityEngine_Component__GetComponent<object>
                                    ((UnityEngine_Component_o *)pUVar3,
                                     Method_UnityEngine_Component_GetComponent<RectTransform>__);
              pUVar3 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
              if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
                UVar4 = UnityEngine_Transform__get_localPosition
                                  ((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
                UVar5 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
                UnityEngine_TransformExtensions__SetLocalPositionX
                          (pUVar3,UVar4.fields.x + UVar5.fields.x * -0.5,(MethodInfo *)0x0);
                pUVar3 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                UVar4 = UnityEngine_Transform__get_localPosition
                                  ((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
                UnityEngine_TransformExtensions__SetLocalPositionY
                          (pUVar3,UVar4.fields.y,(MethodInfo *)0x0);
                return;
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

