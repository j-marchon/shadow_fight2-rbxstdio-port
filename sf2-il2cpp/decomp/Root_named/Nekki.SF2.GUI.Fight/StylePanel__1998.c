// TypeDefIndex 1998
// Namespace: Nekki.SF2.GUI.Fight
// public class StylePanel : MonoBehaviour
// Fields:
//   private StyleBar _styleBar; // 0x20
//   private ResolutionImage LLCBBBFOKMP; // 0x28
//   private Dictionary<InfoAnimation, int> IFAJMBGJEIN; // 0x30
//   private int HOBABLEHLDI; // 0x38
//   private int OOADLOIGCHI; // 0x3C
//   private const float NGHCCLIENBN = 25;
//   private const float DCBEAHGEHKL = 0;

// ===== public void SetStyleValue(float CJNHFNHJHPE)  [RVA 0x3293518]
// Nekki.SF2.GUI.Fight.StylePanel$$SetStyleValue @ RVA 0x3293518

void Nekki_SF2_GUI_Fight_StylePanel__SetStyleValue
               (Nekki_SF2_GUI_Fight_StylePanel_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_StyleBar_o *__this_00;
  
  __this_00 = (__this->fields)._styleBar;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033934d0 with catch @ 03393524
                        */
  if (__this_00 != (Nekki_SF2_GUI_Fight_StyleBar_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03393478 with catch @ 03393528
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0339349c with catch @ 0339352c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03393408 with catch @ 03393530
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033933a8 with catch @ 03393534
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0339334c with catch @ 03393538
                        */
    Nekki_SF2_GUI_Fight_StyleBar__SetValue
              (__this_00,CJNHFNHJHPE,0,(__this->fields).OOADLOIGCHI,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03393398 with catch @ 0339353c
                       catch(type#1 @ 03f99f68) { ... } // from try @ 033933f4 with catch @ 0339353c
                       catch(type#1 @ 03f99f68) { ... } // from try @ 0339345c with catch @ 0339353c
                        */
  FUN_01bab8c8();
}


// ===== public int get_CurrentStyleStrip()  [RVA 0x3293540]
// Nekki.SF2.GUI.Fight.StylePanel$$get_CurrentStyleStrip @ RVA 0x3293540

int32_t Nekki_SF2_GUI_Fight_StylePanel__get_CurrentStyleStrip
                  (Nekki_SF2_GUI_Fight_StylePanel_o *__this,MethodInfo *method)

{
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03393338 with catch @ 03393540
                        */
  return (__this->fields).OOADLOIGCHI;
}


// ===== public float GetStyleValue()  [RVA 0x3293548]
// Nekki.SF2.GUI.Fight.StylePanel$$GetStyleValue @ RVA 0x3293548

float Nekki_SF2_GUI_Fight_StylePanel__GetStyleValue
                (Nekki_SF2_GUI_Fight_StylePanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_StyleBar_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields)._styleBar;
  if (__this_00 != (Nekki_SF2_GUI_Fight_StyleBar_o *)0x0) {
                    /* try { // try from 03393558 to 0349355b has its CatchHandler @ 03393584 */
                    /* try { // try from 0339355c to 03493593 has its CatchHandler @ 03393214 */
    fVar1 = Nekki_SF2_GUI_Fight_StyleBar__GetValue
                      (__this_00,(__this->fields).OOADLOIGCHI,(MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void IncreaseStyleStripByValue(float CJNHFNHJHPE)  [RVA 0x329356C]
// Nekki.SF2.GUI.Fight.StylePanel$$IncreaseStyleStripByValue @ RVA 0x329356C

void Nekki_SF2_GUI_Fight_StylePanel__IncreaseStyleStripByValue
               (Nekki_SF2_GUI_Fight_StylePanel_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  int iVar1;
  Nekki_SF2_GUI_Fight_StyleBar_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *method_00;
  NDGHNMIHOMN_o *pNVar2;
  System_Collections_Generic_List_KKCEIILPLEC__o *pSVar3;
  int iVar4;
  float CJNHFNHJHPE_00;
  
                    /* catch() { ... } // from try @ 03393558 with catch @ 03393584 */
                    /* try { // try from 03393594 to 0349359b has its CatchHandler @ 033935b0 */
  if ((DAT_04567344 & 1) == 0) {
                    /* try { // try from 0339359c to 034935a7 has its CatchHandler @ 03393214 */
    FUN_01bab630(&Method_System_Collections_Generic_List<KKCEIILPLEC>_get_Count__);
                    /* try { // try from 033935a8 to 034935af has its CatchHandler @ 033935b0 */
    FUN_01bab630(&GameUtils_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03393594 with catch @ 033935b0
                       catch(type#2 @ 00000000) { ... } // from try @ 033935a8 with catch @ 033935b0
                        */
                    /* try { // try from 033935b4 to 03493683 has its CatchHandler @ 033935b4
                       catch() { ... } // from try @ 033935b4 with catch @ 033935b4
                       catch() { ... } // from try @ 033936e8 with catch @ 033935b4
                       catch() { ... } // from try @ 0339371c with catch @ 033935b4
                       catch() { ... } // from try @ 03393744 with catch @ 033935b4
                       catch() { ... } // from try @ 03393778 with catch @ 033935b4 */
    DAT_04567344 = 1;
  }
  iVar4 = (__this->fields).OOADLOIGCHI;
  iVar1 = -0x80000000;
  if (CJNHFNHJHPE != INFINITY) {
    iVar1 = (int)CJNHFNHJHPE;
  }
  CJNHFNHJHPE_00 = fmodf(CJNHFNHJHPE,1.0);
  method_00 = extraout_x1;
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  pNVar2 = GameUtils_TypeInfo->static_fields->EMBDCDBPFFE;
  if ((pNVar2 != (NDGHNMIHOMN_o *)0x0) &&
     (pSVar3 = (pNVar2->fields).PEMHPNLDPHD,
     pSVar3 != (System_Collections_Generic_List_KKCEIILPLEC__o *)0x0)) {
    iVar4 = iVar4 + iVar1;
    if ((pSVar3->fields)._size <= iVar4) {
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pNVar2 = GameUtils_TypeInfo->static_fields->EMBDCDBPFFE;
        method_00 = extraout_x1_01;
        if (pNVar2 == (NDGHNMIHOMN_o *)0x0) goto LAB_033936b8;
      }
      pSVar3 = (pNVar2->fields).PEMHPNLDPHD;
      if (pSVar3 == (System_Collections_Generic_List_KKCEIILPLEC__o *)0x0) goto LAB_033936b8;
      CJNHFNHJHPE_00 = 1.0;
      iVar4 = (pSVar3->fields)._size + -1;
    }
    iVar1 = iVar4;
    if (iVar4 != (__this->fields).OOADLOIGCHI) {
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        __this_00 = (__this->fields)._styleBar;
        if (__this_00 == (Nekki_SF2_GUI_Fight_StyleBar_o *)0x0) goto LAB_033936b8;
        Nekki_SF2_GUI_Fight_StyleBar__SetValue(__this_00,1.0,0,iVar1,(MethodInfo *)0x0);
        method_00 = extraout_x1_02;
      }
                    /* try { // try from 03393684 to 0349368b has its CatchHandler @ 0339372c */
      iVar1 = (__this->fields).HOBABLEHLDI;
      if (iVar1 <= iVar4) {
        iVar1 = iVar4;
      }
      (__this->fields).HOBABLEHLDI = iVar1;
      (__this->fields).OOADLOIGCHI = iVar4;
                    /* try { // try from 03393698 to 034936a3 has its CatchHandler @ 03393728 */
      Nekki_SF2_GUI_Fight_StylePanel__UpdateStyleLabel(__this,method_00);
      method_00 = extraout_x1_03;
    }
    Nekki_SF2_GUI_Fight_StylePanel__SetStyleValue(__this,CJNHFNHJHPE_00,method_00);
    return;
  }
LAB_033936b8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public RectTransform get_rectTransform()  [RVA 0x32936D0]
// Nekki.SF2.GUI.Fight.StylePanel$$get_rectTransform @ RVA 0x32936D0

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_Fight_StylePanel__get_rectTransform
          (Nekki_SF2_GUI_Fight_StylePanel_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  
                    /* try { // try from 033936e0 to 034936e7 has its CatchHandler @ 03393720 */
  if ((DAT_04567345 & 1) == 0) {
                    /* try { // try from 033936e8 to 0349370b has its CatchHandler @ 033935b4 */
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04567345 = 1;
  }
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 0339370c to 0349370f has its CatchHandler @ 03393724 */
                    /* try { // try from 03393710 to 0349371b has its CatchHandler @ 03393730 */
                    /* try { // try from 0339371c to 0349373f has its CatchHandler @ 033935b4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033936e0 with catch @ 03393720
                        */
    if (pUVar1->klass != UnityEngine_RectTransform_TypeInfo) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03393710 with catch @ 03393730
                        */
      FUN_01babc64();
    }
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0339370c with catch @ 03393724
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03393698 with catch @ 03393728
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03393684 with catch @ 0339372c
                        */
  return pUVar1;
}


// ===== public void UpdateStyleLabel()  [RVA 0x3293734]
// Nekki.SF2.GUI.Fight.StylePanel$$UpdateStyleLabel @ RVA 0x3293734

void Nekki_SF2_GUI_Fight_StylePanel__UpdateStyleLabel
               (Nekki_SF2_GUI_Fight_StylePanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  NDGHNMIHOMN_o *__this_00;
  KKCEIILPLEC_o *pKVar2;
  System_String_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  
                    /* try { // try from 03393740 to 03493743 has its CatchHandler @ 03393768 */
                    /* try { // try from 03393744 to 0349376f has its CatchHandler @ 033935b4 */
  if ((DAT_04567346 & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
                    /* catch() { ... } // from try @ 03393740 with catch @ 03393768 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 03393770 to 03493777 has its CatchHandler @ 0339378c */
    FUN_01bab630(&string_TypeInfo);
                    /* try { // try from 03393778 to 03493783 has its CatchHandler @ 033935b4 */
    DAT_04567346 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03393784 to 0349378b has its CatchHandler @ 0339378c */
  pNVar3 = (__this->fields).LLCBBBFOKMP;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03393770 with catch @ 0339378c
                       catch(type#2 @ 00000000) { ... } // from try @ 03393784 with catch @ 0339378c
                        */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03393790 to 034938b7 has its CatchHandler @ 03393790
                       catch() { ... } // from try @ 03393790 with catch @ 03393790
                       catch() { ... } // from try @ 03393a18 with catch @ 03393790
                       catch() { ... } // from try @ 03393a4c with catch @ 03393790
                       catch() { ... } // from try @ 03393a8c with catch @ 03393790
                       catch() { ... } // from try @ 03393abc with catch @ 03393790 */
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = GameUtils_TypeInfo->static_fields->EMBDCDBPFFE;
  if (__this_00 != (NDGHNMIHOMN_o *)0x0) {
    pKVar2 = NDGHNMIHOMN__PBOALOOBNEK(__this_00,(__this->fields).OOADLOIGCHI,(MethodInfo *)0x0);
    if (pKVar2 == (KKCEIILPLEC_o *)0x0) {
      return;
    }
    __this_01 = (pKVar2->fields).AABGOBCHPJC;
    if (__this_01 != (System_String_o *)0x0) {
      bVar1 = System_String__Equals
                        (__this_01,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
      pNVar3 = (__this->fields).LLCBBBFOKMP;
      if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
         (__this_02 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         __this_02 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
        pNVar3 = (__this->fields).LLCBBBFOKMP;
        if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                    (pNVar3,(pKVar2->fields).AABGOBCHPJC,(MethodInfo *)0x0);
          pNVar3 = (__this->fields).LLCBBBFOKMP;
          if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03393868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pNVar3->klass->vtable)._45_SetNativeSize.methodPtr)
                      (pNVar3,(pNVar3->klass->vtable)._45_SetNativeSize.method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float GetStyleValue(int EMMEKOIAOOE)  [RVA 0x3293870]
// Nekki.SF2.GUI.Fight.StylePanel$$GetStyleValue @ RVA 0x3293870

float Nekki_SF2_GUI_Fight_StylePanel__GetStyleValue
                (Nekki_SF2_GUI_Fight_StylePanel_o *__this,int32_t EMMEKOIAOOE,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_StyleBar_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields)._styleBar;
  if (__this_00 != (Nekki_SF2_GUI_Fight_StyleBar_o *)0x0) {
    fVar1 = Nekki_SF2_GUI_Fight_StyleBar__GetValue(__this_00,EMMEKOIAOOE,(MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public BKHDDKOEEKP.BGGNJLLOHII get_MaximumStyleStrip()  [RVA 0x329388C]
// Nekki.SF2.GUI.Fight.StylePanel$$get_MaximumStyleStrip @ RVA 0x329388C

int32_t Nekki_SF2_GUI_Fight_StylePanel__get_MaximumStyleStrip
                  (Nekki_SF2_GUI_Fight_StylePanel_o *__this,MethodInfo *method)

{
  return (__this->fields).HOBABLEHLDI;
}


// ===== public string get_CurrentStyleName()  [RVA 0x3293894]
// Nekki.SF2.GUI.Fight.StylePanel$$get_CurrentStyleName @ RVA 0x3293894

System_String_o *
Nekki_SF2_GUI_Fight_StylePanel__get_CurrentStyleName
          (Nekki_SF2_GUI_Fight_StylePanel_o *__this,MethodInfo *method)

{
  KKCEIILPLEC_Fields *pKVar1;
  NDGHNMIHOMN_o *__this_00;
  KKCEIILPLEC_o *pKVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567347 & 1) == 0) {
                    /* try { // try from 033938b8 to 034938bf has its CatchHandler @ 03393a70 */
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* try { // try from 033938cc to 034938d7 has its CatchHandler @ 03393a68 */
    DAT_04567347 = 1;
    method = extraout_x1;
  }
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GameUtils_TypeInfo,method);
  }
  __this_00 = GameUtils_TypeInfo->static_fields->EMBDCDBPFFE;
  if (__this_00 != (NDGHNMIHOMN_o *)0x0) {
    pKVar2 = NDGHNMIHOMN__PBOALOOBNEK(__this_00,(__this->fields).OOADLOIGCHI,(MethodInfo *)0x0);
    pKVar1 = (KKCEIILPLEC_Fields *)&StringLiteral_1/*""*/;
    if (pKVar2 != (KKCEIILPLEC_o *)0x0) {
      pKVar1 = &pKVar2->fields;
    }
                    /* try { // try from 03393918 to 03493927 has its CatchHandler @ 03393a64 */
    return pKVar1->JIJLBFGKNJK;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3293928]
// Nekki.SF2.GUI.Fight.StylePanel$$.ctor @ RVA 0x3293928

void Nekki_SF2_GUI_Fight_StylePanel___ctor
               (Nekki_SF2_GUI_Fight_StylePanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  System_Collections_Generic_Dictionary_ECENNHNBAME__int__o **ppSVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0339392c to 03493937 has its CatchHandler @ 03393a60 */
  if ((DAT_04567348 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<InfoAnimation,_int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<InfoAnimation,_int>_TypeInfo);
    DAT_04567348 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03393978 to 03493987 has its CatchHandler @ 03393a64 */
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<InfoAnimation,_int>_TypeInfo,
                                 method);
  System_Collections_Generic_Dictionary<object,_int>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<InfoAnimation,_int>__ctor__);
  ppSVar1 = &(__this->fields).IFAJMBGJEIN;
                    /* try { // try from 0339398c to 03493997 has its CatchHandler @ 03393a5c */
  *ppSVar1 = (System_Collections_Generic_Dictionary_ECENNHNBAME__int__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void ClearStyleIncrease()  [RVA 0x32939B0]
// Nekki.SF2.GUI.Fight.StylePanel$$ClearStyleIncrease @ RVA 0x32939B0

void Nekki_SF2_GUI_Fight_StylePanel__ClearStyleIncrease
               (Nekki_SF2_GUI_Fight_StylePanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567349 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<InfoAnimation,_int>_Clear__);
                    /* try { // try from 033939d8 to 034939e7 has its CatchHandler @ 03393a64 */
    DAT_04567349 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).IFAJMBGJEIN;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                    /* try { // try from 033939ec to 034939f7 has its CatchHandler @ 03393a58 */
    System_Collections_Generic_Dictionary<object,_int>__Clear
              (__this_00,Method_System_Collections_Generic_Dictionary<InfoAnimation,_int>_Clear__);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033939fc to 03493a07 has its CatchHandler @ 03393a54 */
  FUN_01bab8c8(0,method);
}


// ===== public void UpdateStyle(InfoAnimation CAMAHOAFAPK)  [RVA 0x3293A00]
// Nekki.SF2.GUI.Fight.StylePanel$$UpdateStyle @ RVA 0x3293A00

void Nekki_SF2_GUI_Fight_StylePanel__UpdateStyle
               (Nekki_SF2_GUI_Fight_StylePanel_o *__this,InfoAnimation_o *CAMAHOAFAPK,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_StyleBar_o *__this_00;
  MethodInfo *method_00;
  float fVar1;
  float fVar2;
  
  fVar1 = Nekki_SF2_GUI_Fight_StylePanel__GetStyleIncrease(__this,CAMAHOAFAPK,method);
                    /* try { // try from 03393a10 to 03493a17 has its CatchHandler @ 03393a50 */
  __this_00 = (__this->fields)._styleBar;
  if (__this_00 != (Nekki_SF2_GUI_Fight_StyleBar_o *)0x0) {
                    /* try { // try from 03393a18 to 03493a47 has its CatchHandler @ 03393790 */
    fVar2 = Nekki_SF2_GUI_Fight_StyleBar__GetValue
                      (__this_00,(__this->fields).OOADLOIGCHI,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Fight_StylePanel__IncreaseStyleStripByValue(__this,fVar1 + fVar2,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetAllStyleValue(float CJNHFNHJHPE)  [RVA 0x3293BE8]
// Nekki.SF2.GUI.Fight.StylePanel$$SetAllStyleValue @ RVA 0x3293BE8

void Nekki_SF2_GUI_Fight_StylePanel__SetAllStyleValue
               (Nekki_SF2_GUI_Fight_StylePanel_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_StyleBar_o *__this_00;
  
  __this_00 = (__this->fields)._styleBar;
                    /* try { // try from 03393bf0 to 03493bff has its CatchHandler @ 03393d3c */
  if (__this_00 != (Nekki_SF2_GUI_Fight_StyleBar_o *)0x0) {
    Nekki_SF2_GUI_Fight_StyleBar__SetValue(__this_00,CJNHFNHJHPE,0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float GetStyleIncrease(InfoAnimation CAMAHOAFAPK)  [RVA 0x3293A40]
// Nekki.SF2.GUI.Fight.StylePanel$$GetStyleIncrease @ RVA 0x3293A40

float Nekki_SF2_GUI_Fight_StylePanel__GetStyleIncrease
                (Nekki_SF2_GUI_Fight_StylePanel_o *__this,InfoAnimation_o *CAMAHOAFAPK,
                MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__int__o *pSVar3;
  NDGHNMIHOMN_o *pNVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_60;
  
                    /* try { // try from 03393a48 to 03493a4b has its CatchHandler @ 03393a6c */
                    /* try { // try from 03393a4c to 03493a87 has its CatchHandler @ 03393790 */
                    /* catch() { ... } // from try @ 03393a10 with catch @ 03393a50 */
                    /* catch() { ... } // from try @ 033939fc with catch @ 03393a54 */
                    /* catch() { ... } // from try @ 033939ec with catch @ 03393a58 */
                    /* catch() { ... } // from try @ 0339398c with catch @ 03393a5c */
                    /* catch() { ... } // from try @ 0339392c with catch @ 03393a60 */
                    /* catch() { ... } // from try @ 03393918 with catch @ 03393a64
                       catch() { ... } // from try @ 03393978 with catch @ 03393a64
                       catch() { ... } // from try @ 033939d8 with catch @ 03393a64 */
                    /* catch() { ... } // from try @ 033938cc with catch @ 03393a68 */
  if ((DAT_0456734a & 1) == 0) {
                    /* catch() { ... } // from try @ 03393a48 with catch @ 03393a6c */
                    /* catch() { ... } // from try @ 033938b8 with catch @ 03393a70 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<InfoAnimation,_int>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<InfoAnimation,_int>_get_Item__);
                    /* try { // try from 03393a88 to 03493a8b has its CatchHandler @ 03393aac */
                    /* try { // try from 03393a8c to 03493ab3 has its CatchHandler @ 03393790 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<InfoAnimation,_int>_set_Item__);
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_0456734a = 1;
  }
  if (CAMAHOAFAPK == (InfoAnimation_o *)0x0) {
    return 0.0;
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).IFAJMBGJEIN;
                    /* catch() { ... } // from try @ 03393a88 with catch @ 03393aac */
  if (pSVar3 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) goto LAB_03393be4;
                    /* try { // try from 03393ab4 to 03493abb has its CatchHandler @ 03393ad0 */
                    /* try { // try from 03393abc to 03493ac7 has its CatchHandler @ 03393790 */
  bVar1 = System_Collections_Generic_Dictionary<object,_int>__ContainsKey
                    (pSVar3,(Il2CppObject *)CAMAHOAFAPK,
                     Method_System_Collections_Generic_Dictionary<InfoAnimation,_int>_ContainsKey__);
  if (bVar1) {
                    /* try { // try from 03393ac8 to 03493acf has its CatchHandler @ 03393ad0 */
    pSVar3 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).IFAJMBGJEIN;
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) goto LAB_03393be4;
                    /* catch() { ... } // from try @ 03393ab4 with catch @ 03393ad0
                       catch() { ... } // from try @ 03393ac8 with catch @ 03393ad0 */
    uVar2 = System_Collections_Generic_Dictionary<object,_int>__get_Item
                      (pSVar3,(Il2CppObject *)CAMAHOAFAPK,
                       Method_System_Collections_Generic_Dictionary<InfoAnimation,_int>_get_Item__);
                    /* try { // try from 03393af0 to 03493bcf has its CatchHandler @ 03393af0
                       catch() { ... } // from try @ 03393af0 with catch @ 03393af0
                       catch() { ... } // from try @ 03393cbc with catch @ 03393af0
                       catch() { ... } // from try @ 03393d18 with catch @ 03393af0
                       catch() { ... } // from try @ 03393d60 with catch @ 03393af0
                       catch() { ... } // from try @ 03393d98 with catch @ 03393af0 */
    System_Collections_Generic_Dictionary<object,_int>__set_Item
              (pSVar3,(Il2CppObject *)CAMAHOAFAPK,uVar2 + 1,
               Method_System_Collections_Generic_Dictionary<InfoAnimation,_int>_set_Item__);
    if (uVar2 == 0xffffffff) goto LAB_03393b10;
    uVar2 = ~uVar2;
  }
  else {
LAB_03393b10:
    pSVar3 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).IFAJMBGJEIN;
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) goto LAB_03393be4;
    System_Collections_Generic_Dictionary<object,_int>__set_Item
              (pSVar3,(Il2CppObject *)CAMAHOAFAPK,0,
               Method_System_Collections_Generic_Dictionary<InfoAnimation,_int>_set_Item__);
    uVar2 = 0;
  }
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar4 = GameUtils_TypeInfo->static_fields->EMBDCDBPFFE;
  if (pNVar4 != (NDGHNMIHOMN_o *)0x0) {
    fVar8 = (pNVar4->fields).EAOAPACLBID;
    fVar5 = NDGHNMIHOMN__DIIDLOEMDAD(pNVar4,(__this->fields).OOADLOIGCHI,(MethodInfo *)0x0);
    pNVar4 = GameUtils_TypeInfo->static_fields->EMBDCDBPFFE;
    if (pNVar4 != (NDGHNMIHOMN_o *)0x0) {
      fVar6 = powf((pNVar4->fields).HHAJAMHDBKG,(float)(int)uVar2);
      local_60.fakeValueActive = (CAMAHOAFAPK->fields).DDBKJGNJHPP.fields.fakeValueActive;
      local_60.inited = (CAMAHOAFAPK->fields).DDBKJGNJHPP.fields.inited;
      local_60._18_2_ = *(undefined2 *)&(CAMAHOAFAPK->fields).DDBKJGNJHPP.fields.field_0x12;
      local_60.hiddenValueOldByte4.fields =
           (CAMAHOAFAPK->fields).DDBKJGNJHPP.fields.hiddenValueOldByte4.fields;
      local_60.fakeValue = (CAMAHOAFAPK->fields).DDBKJGNJHPP.fields.fakeValue;
      local_60.currentCryptoKey = (CAMAHOAFAPK->fields).DDBKJGNJHPP.fields.currentCryptoKey;
      local_60.hiddenValue = (CAMAHOAFAPK->fields).DDBKJGNJHPP.fields.hiddenValue;
      fVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_60,
                         (MethodInfo *)0x0);
                    /* try { // try from 03393bd0 to 03493bd7 has its CatchHandler @ 03393d44 */
      return fVar8 * fVar5 * fVar6 * fVar7;
    }
  }
LAB_03393be4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ResetStyle()  [RVA 0x3293C08]
// Nekki.SF2.GUI.Fight.StylePanel$$ResetStyle @ RVA 0x3293C08

void Nekki_SF2_GUI_Fight_StylePanel__ResetStyle
               (Nekki_SF2_GUI_Fight_StylePanel_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  
                    /* try { // try from 03393c1c to 03493c23 has its CatchHandler @ 03393d30 */
  if ((DAT_0456734b & 1) == 0) {
                    /* try { // try from 03393c28 to 03493c33 has its CatchHandler @ 03393d2c */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456734b = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03393c3c to 03493c47 has its CatchHandler @ 03393d38 */
  uVar1 = (__this->fields).HOBABLEHLDI;
                    /* try { // try from 03393c48 to 03493c53 has its CatchHandler @ 03393d34 */
  (__this->fields).HOBABLEHLDI = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  (__this->fields).OOADLOIGCHI = 0;
  Nekki_SF2_GUI_Fight_StylePanel__UpdateStyleLabel(__this,method);
  Nekki_SF2_GUI_Fight_StylePanel__SetAllStyleValue(__this,0.0,method_00);
  Nekki_SF2_GUI_Fight_StylePanel__ClearStyleIncrease(__this,method_01);
  pNVar3 = (__this->fields).LLCBBBFOKMP;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pNVar3 = (__this->fields).LLCBBBFOKMP;
                    /* try { // try from 03393c90 to 03493ca3 has its CatchHandler @ 03393d20 */
    if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03393cb4 to 03493cbb has its CatchHandler @ 03393d24 */
                    /* try { // try from 03393cbc to 03493d0b has its CatchHandler @ 03393af0 */
  return;
}


// ===== public void Init(ResolutionImage GHHDLIFJDIG)  [RVA 0x3293CC4]
// Nekki.SF2.GUI.Fight.StylePanel$$Init @ RVA 0x3293CC4

void Nekki_SF2_GUI_Fight_StylePanel__Init
               (Nekki_SF2_GUI_Fight_StylePanel_o *__this,
               Nekki_SF2_GUI_ResolutionImage_o *GHHDLIFJDIG,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_StyleBar_o *pNVar1;
  System_Action_T__o *action;
  NDGHNMIHOMN_o *pNVar2;
  System_Collections_Generic_List_KKCEIILPLEC__o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o **ppNVar3;
  
  if ((DAT_0456734c & 1) == 0) {
    FUN_01bab630(&System_Action<KKCEIILPLEC>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KKCEIILPLEC>_ForEach__);
    FUN_01bab630(&GameUtils_TypeInfo);
                    /* try { // try from 03393d0c to 03493d0f has its CatchHandler @ 03393d40 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_StylePanel_NAJPAGNBGJB__);
                    /* try { // try from 03393d10 to 03493d13 has its CatchHandler @ 03393d28 */
                    /* try { // try from 03393d14 to 03493d17 has its CatchHandler @ 03393d1c */
    DAT_0456734c = 1;
  }
                    /* try { // try from 03393d18 to 03493d5b has its CatchHandler @ 03393af0 */
  ppNVar3 = &(__this->fields).LLCBBBFOKMP;
                    /* catch() { ... } // from try @ 03393d14 with catch @ 03393d1c */
  *ppNVar3 = GHHDLIFJDIG;
                    /* catch() { ... } // from try @ 03393c90 with catch @ 03393d20 */
                    /* catch() { ... } // from try @ 03393cb4 with catch @ 03393d24 */
                    /* catch() { ... } // from try @ 03393d10 with catch @ 03393d28 */
  thunk_FUN_01c20e04(ppNVar3,GHHDLIFJDIG);
                    /* catch() { ... } // from try @ 03393c28 with catch @ 03393d2c */
  pNVar1 = (__this->fields)._styleBar;
                    /* catch() { ... } // from try @ 03393c1c with catch @ 03393d30 */
  if (pNVar1 != (Nekki_SF2_GUI_Fight_StyleBar_o *)0x0) {
                    /* catch() { ... } // from try @ 03393c48 with catch @ 03393d34 */
                    /* catch() { ... } // from try @ 03393c3c with catch @ 03393d38 */
                    /* catch() { ... } // from try @ 03393bf0 with catch @ 03393d3c */
                    /* catch() { ... } // from try @ 03393d0c with catch @ 03393d40 */
                    /* catch() { ... } // from try @ 03393bd0 with catch @ 03393d44 */
    (*(pNVar1->klass->vtable)._4_Init.methodPtr)(pNVar1,(pNVar1->klass->vtable)._4_Init.method);
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 03393d5c to 03493d5f has its CatchHandler @ 03393d88 */
                    /* try { // try from 03393d60 to 03493d8f has its CatchHandler @ 03393af0 */
    pNVar2 = GameUtils_TypeInfo->static_fields->EMBDCDBPFFE;
    if (pNVar2 != (NDGHNMIHOMN_o *)0x0) {
      __this_00 = (pNVar2->fields).PEMHPNLDPHD;
      action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<KKCEIILPLEC>_TypeInfo);
                    /* catch() { ... } // from try @ 03393d5c with catch @ 03393d88 */
                    /* try { // try from 03393d90 to 03493d97 has its CatchHandler @ 03393dac */
      System_Action<object>___ctor();
                    /* try { // try from 03393d98 to 03493da3 has its CatchHandler @ 03393af0 */
      if (__this_00 != (System_Collections_Generic_List_KKCEIILPLEC__o *)0x0) {
                    /* try { // try from 03393da4 to 03493dab has its CatchHandler @ 03393dac */
                    /* catch() { ... } // from try @ 03393d90 with catch @ 03393dac
                       catch() { ... } // from try @ 03393da4 with catch @ 03393dac */
                    /* try { // try from 03393db0 to 03493ebf has its CatchHandler @ 03393db0
                       catch() { ... } // from try @ 03393db0 with catch @ 03393db0
                       catch() { ... } // from try @ 03393fc0 with catch @ 03393db0
                       catch() { ... } // from try @ 03393ff8 with catch @ 03393db0
                       catch() { ... } // from try @ 03394038 with catch @ 03393db0
                       catch() { ... } // from try @ 03394068 with catch @ 03393db0 */
        System_Collections_Generic_List<object>__ForEach
                  ((System_Collections_Generic_List_object__o *)__this_00,action,
                   Method_System_Collections_Generic_List<KKCEIILPLEC>_ForEach__);
        pNVar1 = (__this->fields)._styleBar;
        if (pNVar1 != (Nekki_SF2_GUI_Fight_StyleBar_o *)0x0) {
          Nekki_SF2_GUI_Fight_StyleBar__SetValue(pNVar1,0.0,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ResolutionImage get_StyleName()  [RVA 0x3293DD8]
// Nekki.SF2.GUI.Fight.StylePanel$$get_StyleName @ RVA 0x3293DD8

Nekki_SF2_GUI_ResolutionImage_o *
Nekki_SF2_GUI_Fight_StylePanel__get_StyleName
          (Nekki_SF2_GUI_Fight_StylePanel_o *__this,MethodInfo *method)

{
  return (__this->fields).LLCBBBFOKMP;
}


// ===== public void SetCurrentStyleStrip(int DPJIDNBJIBG)  [RVA 0x32936BC]
// Nekki.SF2.GUI.Fight.StylePanel$$SetCurrentStyleStrip @ RVA 0x32936BC

void Nekki_SF2_GUI_Fight_StylePanel__SetCurrentStyleStrip
               (Nekki_SF2_GUI_Fight_StylePanel_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).HOBABLEHLDI;
  if (iVar1 <= DPJIDNBJIBG) {
    iVar1 = DPJIDNBJIBG;
  }
  (__this->fields).HOBABLEHLDI = iVar1;
  (__this->fields).OOADLOIGCHI = DPJIDNBJIBG;
  Nekki_SF2_GUI_Fight_StylePanel__UpdateStyleLabel(__this,(MethodInfo *)(ulong)(uint)DPJIDNBJIBG);
  return;
}


// ===== private void NAJPAGNBGJB(KKCEIILPLEC KEFILECBPMF)  [RVA 0x3293DE0]
// Nekki.SF2.GUI.Fight.StylePanel$$NAJPAGNBGJB @ RVA 0x3293DE0

void Nekki_SF2_GUI_Fight_StylePanel__NAJPAGNBGJB
               (Nekki_SF2_GUI_Fight_StylePanel_o *__this,KKCEIILPLEC_o *KEFILECBPMF,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_StyleBar_o *__this_00;
  
  if ((DAT_0456734d & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456734d = 1;
  }
  if ((KEFILECBPMF != (KKCEIILPLEC_o *)0x0) &&
     (__this_00 = (__this->fields)._styleBar, __this_00 != (Nekki_SF2_GUI_Fight_StyleBar_o *)0x0)) {
    Nekki_SF2_GUI_Fight_StyleBar__AddStrip
              (__this_00,(KEFILECBPMF->fields).GLJCNAPKAFN,StringLiteral_1/*""*/,25.0,
               (KEFILECBPMF->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Render()  [RVA 0x3293E48]
// Nekki.SF2.GUI.Fight.StylePanel$$Render @ RVA 0x3293E48

void Nekki_SF2_GUI_Fight_StylePanel__Render
               (Nekki_SF2_GUI_Fight_StylePanel_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  NDGHNMIHOMN_o *pNVar2;
  Nekki_SF2_GUI_Fight_StyleBar_o *__this_00;
  float fVar3;
  float fVar4;
  
  if ((DAT_0456734e & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_0456734e = 1;
    method = extraout_x1;
  }
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GameUtils_TypeInfo,method);
  }
  pNVar2 = GameUtils_TypeInfo->static_fields->EMBDCDBPFFE;
  if (pNVar2 != (NDGHNMIHOMN_o *)0x0) {
    fVar4 = (pNVar2->fields).EDKNLOPAJIC;
    iVar1 = GameUtils__PCJHAMFGJLP((MethodInfo *)0x0);
    __this_00 = (__this->fields)._styleBar;
    if (__this_00 != (Nekki_SF2_GUI_Fight_StyleBar_o *)0x0) {
                    /* try { // try from 03393ec0 to 03493ec7 has its CatchHandler @ 0339401c */
                    /* try { // try from 03393ed4 to 03493edf has its CatchHandler @ 03394018 */
      fVar3 = Nekki_SF2_GUI_Fight_StyleBar__GetValue
                        (__this_00,(__this->fields).OOADLOIGCHI,(MethodInfo *)0x0);
      fVar3 = fVar3 + (fVar4 / -60.0) / (float)iVar1;
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
      Nekki_SF2_GUI_Fight_StylePanel__SetStyleValue(__this,fVar3,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

