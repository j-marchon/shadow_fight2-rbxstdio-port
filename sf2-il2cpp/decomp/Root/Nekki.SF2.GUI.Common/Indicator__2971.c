// TypeDefIndex 2971
// Namespace: Nekki.SF2.GUI.Common
// public class Indicator : MonoBehaviour
// Fields:
//   private ResolutionImage _Circle; // 0x20
//   private ResolutionImage _Ellipse; // 0x28
//   private Text _Label; // 0x30
//   private RectTransform AOBAKMPHNKF; // 0x38
//   private int ONCKKFAODHL; // 0x40

// ===== public void set_State(int CJNHFNHJHPE)  [RVA 0x349FD58]
// Nekki.SF2.GUI.Common.Indicator$$set_State @ RVA 0x349FD58

void Nekki_SF2_GUI_Common_Indicator__set_State
               (Nekki_SF2_GUI_Common_Indicator_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  if ((__this->fields).ONCKKFAODHL == CJNHFNHJHPE) {
    return;
  }
  (__this->fields).ONCKKFAODHL = CJNHFNHJHPE;
  Nekki_SF2_GUI_Common_Indicator__LPNCEHPFOAF(__this,(MethodInfo *)(ulong)(uint)CJNHFNHJHPE);
  return;
}


// ===== private void LPNCEHPFOAF()  [RVA 0x349FD70]
// Nekki.SF2.GUI.Common.Indicator$$LPNCEHPFOAF @ RVA 0x349FD70

void Nekki_SF2_GUI_Common_Indicator__LPNCEHPFOAF
               (Nekki_SF2_GUI_Common_Indicator_o *__this,MethodInfo *method)

{
  int iVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_UI_Text_o *pUVar4;
  System_String_o *pSVar5;
  bool bVar6;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE;
  UnityEngine_UI_Text_c *pUVar7;
  int32_t *piVar8;
  
  if ((DAT_0456848f & 1) == 0) {
    FUN_01bab630(&StringLiteral_1377/*"."*/);
    DAT_0456848f = 1;
  }
  piVar8 = &(__this->fields).ONCKKFAODHL;
  iVar1 = *piVar8;
  if (iVar1 == -1) {
    pNVar2 = (__this->fields)._Circle;
    if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._Ellipse;
      if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
        pUVar4 = (__this->fields)._Label;
        if ((pUVar4 == (UnityEngine_UI_Text_o *)0x0) ||
           (pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
           pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0359ff54;
        UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
        pUVar4 = (__this->fields)._Label;
        if (pUVar4 == (UnityEngine_UI_Text_o *)0x0) goto LAB_0359ff54;
        pUVar7 = pUVar4->klass;
        UNRECOVERED_JUMPTABLE = (pUVar7->vtable)._75_set_text.methodPtr;
        pSVar5 = StringLiteral_1377/*"."*/;
        goto LAB_0359ff44;
      }
    }
  }
  else {
    if (iVar1 < 1) {
      pNVar2 = (__this->fields)._Circle;
      if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0359ff54;
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._Ellipse;
      if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0359ff54;
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._Label;
      if ((pUVar4 == (UnityEngine_UI_Text_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0359ff54;
      bVar6 = false;
    }
    else {
      pNVar2 = (__this->fields)._Circle;
      if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0359ff54;
      if (iVar1 < 10) {
        UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
        pNVar2 = (__this->fields)._Ellipse;
        if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
           (pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
           pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0359ff54;
        bVar6 = false;
      }
      else {
        UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
        pNVar2 = (__this->fields)._Ellipse;
        if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
           (pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
           pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0359ff54;
        bVar6 = true;
      }
      UnityEngine_GameObject__SetActive(pUVar3,bVar6,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._Label;
      if ((pUVar4 == (UnityEngine_UI_Text_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0359ff54;
      bVar6 = true;
    }
    UnityEngine_GameObject__SetActive(pUVar3,bVar6,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._Label;
    pSVar5 = System_Int32__ToString((int32_t)piVar8,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
      pUVar7 = pUVar4->klass;
      UNRECOVERED_JUMPTABLE = (pUVar7->vtable)._75_set_text.methodPtr;
LAB_0359ff44:
                    /* WARNING: Could not recover jumptable at 0x0359ff50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(pUVar4,pSVar5,(pUVar7->vtable)._75_set_text.method);
      return;
    }
  }
LAB_0359ff54:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public RectTransform get_RectTransform()  [RVA 0x349FF58]
// Nekki.SF2.GUI.Common.Indicator$$get_RectTransform @ RVA 0x349FF58

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_Common_Indicator__get_RectTransform
          (Nekki_SF2_GUI_Common_Indicator_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  UnityEngine_RectTransform_o **ppUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  
  if ((DAT_04568490 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568490 = 1;
    method = extraout_x1;
  }
  ppUVar2 = &(__this->fields).AOBAKMPHNKF;
  pUVar3 = *ppUVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,
                        Method_UnityEngine_Component_GetComponent<RectTransform>__);
    (__this->fields).AOBAKMPHNKF = pUVar3;
    thunk_FUN_01c20e04(ppUVar2,pUVar3);
  }
  return *ppUVar2;
}


// ===== public void SetLabelState(bool HJEBKCDDBAB)  [RVA 0x34A0000]
// Nekki.SF2.GUI.Common.Indicator$$SetLabelState @ RVA 0x34A0000

void Nekki_SF2_GUI_Common_Indicator__SetLabelState
               (Nekki_SF2_GUI_Common_Indicator_o *__this,bool HJEBKCDDBAB,MethodInfo *method)

{
  UnityEngine_UI_Text_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._Label;
  if ((__this_00 != (UnityEngine_UI_Text_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,HJEBKCDDBAB,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34A0030]
// Nekki.SF2.GUI.Common.Indicator$$.ctor @ RVA 0x34A0030

void Nekki_SF2_GUI_Common_Indicator___ctor
               (Nekki_SF2_GUI_Common_Indicator_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public int get_State()  [RVA 0x34A0038]
// Nekki.SF2.GUI.Common.Indicator$$get_State @ RVA 0x34A0038

int32_t Nekki_SF2_GUI_Common_Indicator__get_State
                  (Nekki_SF2_GUI_Common_Indicator_o *__this,MethodInfo *method)

{
  return (__this->fields).ONCKKFAODHL;
}


// ===== private void Awake()  [RVA 0x34A0040]
// Nekki.SF2.GUI.Common.Indicator$$Awake @ RVA 0x34A0040

void Nekki_SF2_GUI_Common_Indicator__Awake
               (Nekki_SF2_GUI_Common_Indicator_o *__this,MethodInfo *method)

{
  int iVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_UI_Text_o *pUVar4;
  System_String_o *pSVar5;
  bool bVar6;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE;
  UnityEngine_UI_Text_c *pUVar7;
  int32_t *piVar8;
  
  if ((DAT_0456848f & 1) == 0) {
    FUN_01bab630(&StringLiteral_1377/*"."*/);
    DAT_0456848f = 1;
  }
  piVar8 = &(__this->fields).ONCKKFAODHL;
  iVar1 = *piVar8;
  if (iVar1 == -1) {
    pNVar2 = (__this->fields)._Circle;
    if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._Ellipse;
      if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
        pUVar4 = (__this->fields)._Label;
        if ((pUVar4 == (UnityEngine_UI_Text_o *)0x0) ||
           (pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
           pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0359ff54;
        UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
        pUVar4 = (__this->fields)._Label;
        if (pUVar4 == (UnityEngine_UI_Text_o *)0x0) goto LAB_0359ff54;
        pUVar7 = pUVar4->klass;
        UNRECOVERED_JUMPTABLE = (pUVar7->vtable)._75_set_text.methodPtr;
        pSVar5 = StringLiteral_1377/*"."*/;
        goto LAB_0359ff44;
      }
    }
  }
  else {
    if (iVar1 < 1) {
      pNVar2 = (__this->fields)._Circle;
      if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0359ff54;
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._Ellipse;
      if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0359ff54;
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._Label;
      if ((pUVar4 == (UnityEngine_UI_Text_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0359ff54;
      bVar6 = false;
    }
    else {
      pNVar2 = (__this->fields)._Circle;
      if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0359ff54;
      if (iVar1 < 10) {
        UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
        pNVar2 = (__this->fields)._Ellipse;
        if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
           (pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
           pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0359ff54;
        bVar6 = false;
      }
      else {
        UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
        pNVar2 = (__this->fields)._Ellipse;
        if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
           (pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
           pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0359ff54;
        bVar6 = true;
      }
      UnityEngine_GameObject__SetActive(pUVar3,bVar6,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._Label;
      if ((pUVar4 == (UnityEngine_UI_Text_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0359ff54;
      bVar6 = true;
    }
    UnityEngine_GameObject__SetActive(pUVar3,bVar6,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._Label;
    pSVar5 = System_Int32__ToString((int32_t)piVar8,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
      pUVar7 = pUVar4->klass;
      UNRECOVERED_JUMPTABLE = (pUVar7->vtable)._75_set_text.methodPtr;
LAB_0359ff44:
                    /* WARNING: Could not recover jumptable at 0x0359ff50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(pUVar4,pSVar5,(pUVar7->vtable)._75_set_text.method);
      return;
    }
  }
LAB_0359ff54:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

