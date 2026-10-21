// Nekki.SF2.GUI.Dialogs.Raids.SeasFinNewDanContent$$Init @ RVA 0x315A740

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent__Init
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent_o *__this,int32_t LDIJJJNLEII,
               MethodInfo *method)

{
  CocosAnimation_o *pCVar1;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  BHEDGAKGKPO_StaticFields *pBVar6;
  int32_t local_24;
  
  local_24 = LDIJJJNLEII;
  if ((DAT_04566863 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&StringLiteral_10887);
    FUN_01bab630(&StringLiteral_9679);
                    /* try { // try from 0325a798 to 0335a79f has its CatchHandler @ 0325abd4 */
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_9408);
    DAT_04566863 = 1;
  }
                    /* try { // try from 0325a7c0 to 0335a7c3 has its CatchHandler @ 0325aba8 */
                    /* try { // try from 0325a7c4 to 0335a7cb has its CatchHandler @ 0325abc8 */
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)__this,true,1,StringLiteral_9679,
             false,1,StringLiteral_3640,(MethodInfo *)0x0);
                    /* try { // try from 0325a7d8 to 0335a7df has its CatchHandler @ 0325abcc */
  pCVar1 = (__this->fields)._animationCycleEffect;
                    /* try { // try from 0325a7e0 to 0335a7e7 has its CatchHandler @ 0325abc4 */
  if ((pCVar1 != (CocosAnimation_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pCVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 0325a7f0 to 0335a7f7 has its CatchHandler @ 0325abb8 */
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    pCVar1 = (__this->fields)._animationBottomEffect;
                    /* try { // try from 0325a800 to 0335a80b has its CatchHandler @ 0325abb4 */
    if ((pCVar1 != (CocosAnimation_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pCVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 0325a810 to 0335a81b has its CatchHandler @ 0325abb0 */
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      pCVar1 = (__this->fields)._animationTopEffect;
                    /* try { // try from 0325a820 to 0335a82b has its CatchHandler @ 0325abac */
      if ((pCVar1 != (CocosAnimation_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pCVar1,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._danImage;
        if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                    (pNVar3,StringLiteral_10887,(MethodInfo *)0x0);
                    /* try { // try from 0325a854 to 0335a85f has its CatchHandler @ 0325aba0 */
          pNVar3 = (__this->fields)._danImage;
          if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
             (pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
                    /* try { // try from 0325a874 to 0335a87b has its CatchHandler @ 0325a9d4 */
            pNVar4 = (__this->fields)._newDanHeader;
            if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar4,StringLiteral_9408,(MethodInfo *)0x0);
                    /* try { // try from 0325a898 to 0335a89f has its CatchHandler @ 0325a9cc */
              pNVar4 = (__this->fields)._newDanHeader;
              if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                pBVar6 = BHEDGAKGKPO_TypeInfo->static_fields;
                    /* try { // try from 0325a8b8 to 0335a903 has its CatchHandler @ 0325a9d8 */
                (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
                          ((pBVar6->ODGAJIBDACC).fields.r,(pBVar6->ODGAJIBDACC).fields.g,
                           (pBVar6->ODGAJIBDACC).fields.b,(pBVar6->ODGAJIBDACC).fields.a,pNVar4,
                           (pNVar4->klass->vtable)._23_set_color.method);
                pNVar4 = (__this->fields)._danNumber;
                pSVar5 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
                if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                  (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
                            (pNVar4,pSVar5,(pNVar4->klass->vtable)._75_set_text.method);
                  pNVar4 = (__this->fields)._danNumber;
                  if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    pBVar6 = BHEDGAKGKPO_TypeInfo->static_fields;
                    /* try { // try from 0325a91c to 0335a927 has its CatchHandler @ 0325ab9c */
                    (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
                              ((pBVar6->FHIAKPJBBCB).fields.r,(pBVar6->FHIAKPJBBCB).fields.g,
                               (pBVar6->FHIAKPJBBCB).fields.b,(pBVar6->FHIAKPJBBCB).fields.a,pNVar4,
                               (pNVar4->klass->vtable)._23_set_color.method);
                    pNVar4 = (__this->fields)._danNumber;
                    if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
                       (pUVar2 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
                       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
                      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
                      Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent__HFPABPLHLPF
                                (__this,method_00);
                      Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent__DCHMMGBLHKD
                                (__this,method_01);
                      Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent__DPDOFBODHNH
                                (__this,method_02);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

