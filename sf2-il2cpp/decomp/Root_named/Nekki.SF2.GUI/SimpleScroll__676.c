// TypeDefIndex 676
// Namespace: Nekki.SF2.GUI
// public class SimpleScroll : ScrollRect
// Fields:
//   private const float BKHPABHPEPP = 1;
//   private Action EIJEMCCCNOJ; // 0x130
//   private Action<BaseScrollItem> FOKMEOHPDJL; // 0x138
//   private Action JFFDCLAAPBE; // 0x140
//   private Action FOOOBJNPNEH; // 0x148
//   public List<BaseScrollItem> Items; // 0x150
//   private Ease _snapEase; // 0x158
//   private float _snapTime; // 0x15C
//   private bool _snap; // 0x160
//   private bool _looped; // 0x161
//   private RectTransform _visibilityChecker; // 0x168
//   private HorizontalOrVerticalLayoutGroup MOKFCILEKDG; // 0x170
//   private short ANKHPKGAHCA; // 0x178
//   private bool HKKGIJOKKEK; // 0x17A
//   private bool GEKPPBOJDCF; // 0x17B
//   private IEnumerator NMIHOKCDLMP; // 0x180
//   private bool JCKMKFCCNAA; // 0x188
//   private RectTransform[] KIANNGNDAFC; // 0x190
//   private Vector2 GNMNFMOHDMG; // 0x198
//   private Vector2 KFDLOCBGNEA; // 0x1A0
//   private Vector2 IFDBJFNPOEK; // 0x1A8
//   private Vector2 AOLPGMKLBGK; // 0x1B0
//   private short GCNFFAAPOKE; // 0x1B8
//   private long POPINJOHFLF; // 0x1C0
//   private bool IHIEPGHGHKH; // 0x1C8
//   private OGNCMFBMBMB LNAPCDLIOOE; // 0x1D0
//   private Dictionary<string, SimpleScroll.LIOIEDNIMLD> HBNEMFAMCED; // 0x1D8

// ===== public bool get_IsYcenter()  [RVA 0x3029B34]
// Nekki.SF2.GUI.SimpleScroll$$get_IsYcenter @ RVA 0x3029B34

bool Nekki_SF2_GUI_SimpleScroll__get_IsYcenter
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o UVar2;
  
  __this_00 = (__this->fields).super.m_Content;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar2 = UnityEngine_RectTransform__get_pivot(__this_00,(MethodInfo *)0x0);
    bVar1 = Util__JFJCDAJGFKD(UVar2.fields.y,0.5,0.01,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void add_OnBeginDragging(Action CJNHFNHJHPE)  [RVA 0x3029B68]
// Nekki.SF2.GUI.SimpleScroll$$add_OnBeginDragging @ RVA 0x3029B68

void Nekki_SF2_GUI_SimpleScroll__add_OnBeginDragging
               (Nekki_SF2_GUI_SimpleScroll_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method
               )

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o *a;
  
  if ((DAT_04565cb0 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04565cb0 = 1;
  }
  a = (__this->fields).FOOOBJNPNEH;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(&(__this->fields).FOOOBJNPNEH,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void RebuildLayout()  [RVA 0x3029C08]
// Nekki.SF2.GUI.SimpleScroll$$RebuildLayout @ RVA 0x3029C08

void Nekki_SF2_GUI_SimpleScroll__RebuildLayout
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  UnityEngine_RectTransform_o *layoutRoot;
  
  if ((DAT_04565cb1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_LayoutRebuilder_TypeInfo);
    DAT_04565cb1 = 1;
    method = extraout_x1;
  }
  if (*(char *)&(__this->fields).LNAPCDLIOOE != '\0') {
    return;
  }
  layoutRoot = (__this->fields).super.m_Content;
  if ((UnityEngine_UI_LayoutRebuilder_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_UI_LayoutRebuilder_TypeInfo,method);
  }
  UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(layoutRoot,(MethodInfo *)0x0);
  return;
}


// ===== private IEnumerator GMEOEFHKANF(Vector2 MJBMLNKAPGC, float PNEIGGOFIOA, Ease GAJONDLDKLI)  [RVA 0x3029C78]
// Nekki.SF2.GUI.SimpleScroll$$GMEOEFHKANF @ RVA 0x3029C78

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_SimpleScroll__GMEOEFHKANF
          (Nekki_SF2_GUI_SimpleScroll_o *__this,UnityEngine_Vector2_o MJBMLNKAPGC,float PNEIGGOFIOA,
          int32_t GAJONDLDKLI,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if ((DAT_04565cb2 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_SimpleScroll_NLGHFAKLCEI_TypeInfo);
    DAT_04565cb2 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(Nekki_SF2_GUI_SimpleScroll_NLGHFAKLCEI_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].monitor = __this;
  thunk_FUN_01c20e04(&__this_00[2].monitor,__this);
  *(float *)&__this_00[3].klass = MJBMLNKAPGC.fields.x;
  *(float *)((long)&__this_00[3].klass + 4) = MJBMLNKAPGC.fields.y;
  *(float *)&__this_00[2].klass = PNEIGGOFIOA;
  *(int32_t *)((long)&__this_00[2].klass + 4) = GAJONDLDKLI;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== public bool Contains(BaseScrollItem IKKAMAMLIKA)  [RVA 0x3029D40]
// Nekki.SF2.GUI.SimpleScroll$$Contains @ RVA 0x3029D40

bool Nekki_SF2_GUI_SimpleScroll__Contains
               (Nekki_SF2_GUI_SimpleScroll_o *__this,Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_object__o *__this_00;
  
  if ((DAT_04565cb3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_Contains__);
    DAT_04565cb3 = 1;
  }
  __this_00 = *(System_Collections_Generic_List_object__o **)&(__this->fields)._snapEase;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    bVar1 = System_Collections_Generic_List<object>__Contains
                      (__this_00,(Il2CppObject *)IKKAMAMLIKA,
                       Method_System_Collections_Generic_List<BaseScrollItem>_Contains__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JJNHMFIKFBM(int PNALLDHABKO, float PNEIGGOFIOA, Ease GAJONDLDKLI = 1)  [RVA 0x3029D98]
// Nekki.SF2.GUI.SimpleScroll$$JJNHMFIKFBM @ RVA 0x3029D98

void Nekki_SF2_GUI_SimpleScroll__JJNHMFIKFBM
               (Nekki_SF2_GUI_SimpleScroll_o *__this,int32_t PNALLDHABKO,float PNEIGGOFIOA,
               int32_t GAJONDLDKLI,MethodInfo *method)

{
  int iVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  UnityEngine_RectTransform_o *__this_00;
  System_IndexOutOfRangeException_o *__this_01;
  System_String_o *message;
  undefined8 uVar5;
  int32_t GAJONDLDKLI_00;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  MethodInfo *method_02;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Vector2_Fields UVar10;
  UnityEngine_Vector2_Fields UVar11;
  
  method_02 = (MethodInfo *)(ulong)(uint)GAJONDLDKLI;
  method_00 = (MethodInfo *)(ulong)(uint)PNALLDHABKO;
  if ((DAT_04565cb4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    DAT_04565cb4 = 1;
    method_00 = extraout_x1;
  }
  lVar6 = *(long *)&(__this->fields)._snapEase;
  if (lVar6 == 0) goto LAB_03129eb8;
  iVar1 = *(int *)(lVar6 + 0x18);
  UVar10 = (UnityEngine_Vector2_Fields)Nekki_SF2_GUI_SimpleScroll__ODIEMJGFIFB(__this,method_00);
  sVar2 = (short)(__this->fields).POPINJOHFLF;
  if ((sVar2 == 0) || (UVar10 = (UnityEngine_Vector2_Fields)((ulong)UVar10 >> 0x20), sVar2 == 1)) {
    UVar11 = (UnityEngine_Vector2_Fields)Nekki_SF2_GUI_SimpleScroll__GetItemSize(__this,method_01);
    sVar2 = (short)(__this->fields).POPINJOHFLF;
    if ((sVar2 == 0) || (UVar11 = (UnityEngine_Vector2_Fields)((ulong)UVar11 >> 0x20), sVar2 == 1))
    {
      lVar6 = *(long *)&(__this->fields).ANKHPKGAHCA;
      if (lVar6 != 0) {
        iVar3 = 0;
        if (iVar1 != 0) {
          iVar3 = PNALLDHABKO / iVar1;
        }
        fVar8 = (float)(PNALLDHABKO - iVar3 * iVar1);
        fVar7 = UVar11.x + *(float *)(lVar6 + 0x60);
        fVar9 = fVar7 * fVar8;
        if ((__this->fields).super.m_Horizontal != false) {
          fVar9 = -(fVar7 * fVar8);
        }
        fVar9 = UVar10.x + fVar9;
        bVar4 = Util__KEJBDHBDGNI(fVar9,0.1,(MethodInfo *)0x0);
        if (bVar4) {
          return;
        }
        __this_00 = (__this->fields).super.m_Content;
        if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
          UVar10 = (UnityEngine_Vector2_Fields)
                   UnityEngine_RectTransform__get_anchoredPosition(__this_00,(MethodInfo *)0x0);
          sVar2 = (short)(__this->fields).POPINJOHFLF;
          if ((sVar2 == 0) ||
             (UVar10 = (UnityEngine_Vector2_Fields)((ulong)UVar10 >> 0x20), sVar2 == 1)) {
            Nekki_SF2_GUI_SimpleScroll__ScrollToOrth
                      (__this,fVar9 + UVar10.x,PNEIGGOFIOA,GAJONDLDKLI_00,method_02);
            return;
          }
          goto LAB_03129ebc;
        }
      }
LAB_03129eb8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
LAB_03129ebc:
  thunk_FUN_01bb9178(&System_IndexOutOfRangeException_TypeInfo);
  __this_01 = (System_IndexOutOfRangeException_o *)thunk_FUN_01bda818();
  message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_7706/*"Invalid Vector2 index!"*/);
  System_IndexOutOfRangeException___ctor(__this_01,message,(MethodInfo *)0x0);
  uVar5 = thunk_FUN_01bb9178(&Method_UnityEngine_Vector2_get_Item__);
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_01,uVar5);
}


// ===== public bool get_Snap()  [RVA 0x302A2E4]
// Nekki.SF2.GUI.SimpleScroll$$get_Snap @ RVA 0x302A2E4

bool Nekki_SF2_GUI_SimpleScroll__get_Snap(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  return (bool)*(undefined1 *)&(__this->fields)._visibilityChecker;
}


// ===== public override void OnBeginDrag(PointerEventData OHNNFPGGEFK)  [RVA 0x302A2EC]
// Nekki.SF2.GUI.SimpleScroll$$OnBeginDrag @ RVA 0x302A2EC

void Nekki_SF2_GUI_SimpleScroll__OnBeginDrag
               (Nekki_SF2_GUI_SimpleScroll_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_EventSystems_PointerEventData_o *extraout_x1;
  UnityEngine_EventSystems_PointerEventData_o *method_00;
  MethodInfo *method_01;
  System_Action_o *pSVar2;
  
  method_00 = OHNNFPGGEFK;
  if ((DAT_04565cb5 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
    DAT_04565cb5 = 1;
    method_00 = extraout_x1;
  }
  if (*(char *)&(__this->fields).LNAPCDLIOOE != '\0') {
    return;
  }
  Nekki_SF2_GUI_SimpleScroll__CCPABLFBFFA(__this,(MethodInfo *)method_00);
  *(undefined1 *)&(__this->fields).KIANNGNDAFC = 1;
  *(undefined8 *)&(__this->fields).IHIEPGHGHKH = 0;
  Nekki_SF2_GUI_SimpleScroll__ICHICAKKILG(__this,method_01);
  bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                    (*(System_Collections_Generic_List_T__o **)&(__this->fields)._snapEase,
                     Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
  if (!bVar1) {
    UnityEngine_UI_ScrollRect__OnBeginDrag
              ((UnityEngine_UI_ScrollRect_o *)__this,OHNNFPGGEFK,(MethodInfo *)0x0);
  }
  pSVar2 = (__this->fields).FOOOBJNPNEH;
  *(undefined2 *)&(__this->fields).NMIHOKCDLMP = 2;
  if (pSVar2 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0312a398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private Vector2 DJPCFEGDNJN()  [RVA 0x302A4D8]
// Nekki.SF2.GUI.SimpleScroll$$DJPCFEGDNJN @ RVA 0x302A4D8

UnityEngine_Vector2_o
Nekki_SF2_GUI_SimpleScroll__DJPCFEGDNJN(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  MethodInfo *method_00;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Vector2_Fields UVar3;
  UnityEngine_Rect_o UVar4;
  
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
  }
  pUVar1 = (__this->fields).super.m_Viewport;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    UVar3 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
    UVar4 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).super.m_Viewport;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar2 = UnityEngine_RectTransform__get_pivot(pUVar1,(MethodInfo *)0x0);
      UVar2.fields.y = (float)((ulong)UVar2.fields >> 0x20);
      UVar3 = (UnityEngine_Vector2_Fields)
              Nekki_SF2_GUI_SimpleScroll__OGKNNMEDGGO
                        (__this,(UnityEngine_Vector2_o)UVar3,
                         (UnityEngine_Vector2_o)UVar4.fields._8_8_,UVar2,method_00);
      return (UnityEngine_Vector2_o)UVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool DNMIKEGDEAG(BaseScrollItem IKKAMAMLIKA)  [RVA 0x302A680]
// Nekki.SF2.GUI.SimpleScroll$$DNMIKEGDEAG @ RVA 0x302A680

bool Nekki_SF2_GUI_SimpleScroll__DNMIKEGDEAG
               (Nekki_SF2_GUI_SimpleScroll_o *__this,Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,
               MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  int iVar3;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_48;
  
  if ((DAT_04565cb6 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>_get_Values__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SimpleScroll_LIOIEDNIMLD>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SimpleScroll_LIOIEDNIMLD>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SimpleScroll_LIOIEDNIMLD>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<string,_SimpleScroll_LIOIEDNIMLD>_GetEnumerator__
                );
    DAT_04565cb6 = 1;
  }
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._currentValue = (Il2CppObject *)0x0;
  if ((__this[1].klass == (Nekki_SF2_GUI_SimpleScroll_c *)0x0) ||
     (__this_00 = System_Collections_Generic_Dictionary<object,_object>__get_Values
                            ((System_Collections_Generic_Dictionary_object__object__o *)
                             __this[1].klass,
                             Method_System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>_get_Values__
                            ),
     __this_00 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_Dictionary_ValueCollection<object,_object>__GetEnumerator
            (&local_48,__this_00,
             Method_System_Collections_Generic_Dictionary_ValueCollection<string,_SimpleScroll_LIOIEDNIMLD>_GetEnumerator__
            );
  do {
    bVar1 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SimpleScroll_LIOIEDNIMLD>_MoveNext__
                      );
    if (!bVar1) {
      iVar3 = 5;
      goto LAB_0312a764;
    }
    if ((Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *)local_48.fields._currentValue ==
        (Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD__BBEGHHMIKAO
                      ((Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *)local_48.fields._currentValue,
                       IKKAMAMLIKA,method);
  } while (!bVar2);
  iVar3 = 4;
LAB_0312a764:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__Dispose
            (&local_48,
             Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SimpleScroll_LIOIEDNIMLD>_Dispose__
            );
  return bVar1 && iVar3 == 4;
}


// ===== public void ScrollToMedium(float LFJGFLNMBMC = 0, Ease GAJONDLDKLI = 8)  [RVA 0x302A864]
// Nekki.SF2.GUI.SimpleScroll$$ScrollToMedium @ RVA 0x302A864

void Nekki_SF2_GUI_SimpleScroll__ScrollToMedium
               (Nekki_SF2_GUI_SimpleScroll_o *__this,float LFJGFLNMBMC,int32_t GAJONDLDKLI,
               MethodInfo *method)

{
  int iVar1;
  MethodInfo *in_x3;
  long lVar2;
  
  if ((DAT_04565cb7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    DAT_04565cb7 = 1;
  }
  lVar2 = *(long *)&(__this->fields)._snapEase;
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x18);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 1;
    }
    Nekki_SF2_GUI_SimpleScroll__ScrollToItem(__this,iVar1 >> 1,LFJGFLNMBMC,GAJONDLDKLI,in_x3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private int OKPIAGEHBOH()  [RVA 0x302AA1C]
// Nekki.SF2.GUI.SimpleScroll$$OKPIAGEHBOH @ RVA 0x302AA1C

int32_t Nekki_SF2_GUI_SimpleScroll__OKPIAGEHBOH
                  (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  return (int32_t)((__this->fields).GNMNFMOHDMG.fields != (UnityEngine_Vector2_Fields)0x0);
}


// ===== public void remove_OnScroll(Action<BaseScrollItem> CJNHFNHJHPE)  [RVA 0x302AA2C]
// Nekki.SF2.GUI.SimpleScroll$$remove_OnScroll @ RVA 0x302AA2C

void Nekki_SF2_GUI_SimpleScroll__remove_OnScroll
               (Nekki_SF2_GUI_SimpleScroll_o *__this,System_Action_BaseScrollItem__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_BaseScrollItem__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_o *pSVar5;
  System_Action_o *source;
  
  if ((DAT_04565cb8 & 1) == 0) {
    FUN_01bab630(&System_Action<BaseScrollItem>_TypeInfo);
    DAT_04565cb8 = 1;
  }
  source = (__this->fields).JFFDCLAAPBE;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<BaseScrollItem>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<BaseScrollItem>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_o *)FUN_01c07368(&(__this->fields).JFFDCLAAPBE,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== private Vector2 NEMAMJHLMKI(RectTransform IKKAMAMLIKA)  [RVA 0x302AAE0]
// Nekki.SF2.GUI.SimpleScroll$$NEMAMJHLMKI @ RVA 0x302AAE0

UnityEngine_Vector2_o
Nekki_SF2_GUI_SimpleScroll__NEMAMJHLMKI
          (Nekki_SF2_GUI_SimpleScroll_o *__this,UnityEngine_RectTransform_o *IKKAMAMLIKA,
          MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  MethodInfo *method_00;
  float fVar2;
  float fVar3;
  UnityEngine_Rect_o UVar4;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Vector2_o UVar6;
  UnityEngine_Vector2_o UVar7;
  UnityEngine_Vector2_o UVar8;
  UnityEngine_Vector2_o UVar9;
  UnityEngine_Vector2_o UVar10;
  UnityEngine_Vector2_o FGKNNDKHOGB;
  UnityEngine_Vector2_Fields UVar11;
  
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
  }
  if (IKKAMAMLIKA != (UnityEngine_RectTransform_o *)0x0) {
    fVar2 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.x;
    fVar3 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.y;
    UVar5 = UnityEngine_RectTransform__get_anchoredPosition(IKKAMAMLIKA,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).super.m_Content;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar4 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
      UVar6 = UnityEngine_RectTransform__get_anchorMin(IKKAMAMLIKA,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).super.m_Viewport;
      if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
        UVar7 = UnityEngine_RectTransform__get_pivot(pUVar1,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).super.m_Content;
        if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
          UVar8 = UnityEngine_RectTransform__get_anchoredPosition(pUVar1,(MethodInfo *)0x0);
          UVar9 = UnityEngine_RectTransform__get_sizeDelta(IKKAMAMLIKA,(MethodInfo *)0x0);
          UVar10 = UnityEngine_RectTransform__get_pivot(IKKAMAMLIKA,(MethodInfo *)0x0);
          FGKNNDKHOGB.fields.y =
               fVar3 + UVar5.fields.y + UVar4.fields.m_Height * (UVar6.fields.y - UVar7.fields.y) +
               UVar8.fields.y;
          FGKNNDKHOGB.fields.x =
               fVar2 + UVar5.fields.x + UVar4.fields.m_Width * (UVar6.fields.x - UVar7.fields.x) +
               UVar8.fields.x;
          UVar5.fields.x = UVar10.fields.x;
          UVar5.fields.y = (float)((ulong)UVar10.fields >> 0x20);
          UVar6.fields.x = UVar9.fields.x;
          UVar6.fields.y = (float)((ulong)UVar9.fields >> 0x20);
          UVar11 = (UnityEngine_Vector2_Fields)
                   Nekki_SF2_GUI_SimpleScroll__OGKNNMEDGGO(__this,FGKNNDKHOGB,UVar6,UVar5,method_00)
          ;
          return (UnityEngine_Vector2_o)UVar11;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void SetContentAnchoredPosition(Vector2 EMPKHNEPHPO)  [RVA 0x302AC1C]
// Nekki.SF2.GUI.SimpleScroll$$SetContentAnchoredPosition @ RVA 0x302AC1C

void Nekki_SF2_GUI_SimpleScroll__SetContentAnchoredPosition
               (Nekki_SF2_GUI_SimpleScroll_o *__this,UnityEngine_Vector2_o EMPKHNEPHPO,
               MethodInfo *method)

{
  UnityEngine_UI_ScrollRect__SetContentAnchoredPosition
            ((UnityEngine_UI_ScrollRect_o *)__this,EMPKHNEPHPO,(MethodInfo *)0x0);
  return;
}


// ===== public void ReservePool(int CJNHFNHJHPE, string PMACBPAMPJA)  [RVA 0x302AC24]
// Nekki.SF2.GUI.SimpleScroll$$ReservePool @ RVA 0x302AC24

void Nekki_SF2_GUI_SimpleScroll__ReservePool
               (Nekki_SF2_GUI_SimpleScroll_o *__this,int32_t CJNHFNHJHPE,
               System_String_o *PMACBPAMPJA,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *DKIDCBPNMPD;
  System_Collections_Generic_Dictionary_string__SimpleScroll_LIOIEDNIMLD__o *__this_00;
  
  if ((DAT_04565cb9 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>_get_Item__
                );
    FUN_01bab630(&Method_OGNCMFBMBMB_OKGEDPADCHO<BaseScrollItem>__);
    DAT_04565cb9 = 1;
  }
  if (__this[1].klass != (Nekki_SF2_GUI_SimpleScroll_c *)0x0) {
    __this_00 = (__this->fields).HBNEMFAMCED;
    pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)__this[1].klass,
                        (Il2CppObject *)PMACBPAMPJA,
                        Method_System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>_get_Item__
                       );
    if (((pIVar1 != (Il2CppObject *)0x0) && (pIVar1[1].monitor != (UnityEngine_Component_o *)0x0))
       && (DKIDCBPNMPD = UnityEngine_Component__get_gameObject(pIVar1[1].monitor,(MethodInfo *)0x0),
          __this_00 !=
          (System_Collections_Generic_Dictionary_string__SimpleScroll_LIOIEDNIMLD__o *)0x0)) {
      OGNCMFBMBMB__OKGEDPADCHO<object>
                ((OGNCMFBMBMB_o *)__this_00,DKIDCBPNMPD,PMACBPAMPJA,CJNHFNHJHPE,
                 Method_OGNCMFBMBMB_OKGEDPADCHO<BaseScrollItem>__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_IsYUp()  [RVA 0x302ACD0]
// Nekki.SF2.GUI.SimpleScroll$$get_IsYUp @ RVA 0x302ACD0

bool Nekki_SF2_GUI_SimpleScroll__get_IsYUp(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o UVar1;
  
  __this_00 = (__this->fields).super.m_Content;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_pivot(__this_00,(MethodInfo *)0x0);
    return 0.99 < UVar1.fields.y;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private Vector2 OGKNNMEDGGO(Vector2 FGKNNDKHOGB, Vector2 KFCJCEIBICJ, Vector2 IADAOAEBFEB)  [RVA 0x302A57C]
// Nekki.SF2.GUI.SimpleScroll$$OGKNNMEDGGO @ RVA 0x302A57C

UnityEngine_Vector2_o
Nekki_SF2_GUI_SimpleScroll__OGKNNMEDGGO
          (Nekki_SF2_GUI_SimpleScroll_o *__this,UnityEngine_Vector2_o FGKNNDKHOGB,
          UnityEngine_Vector2_o KFCJCEIBICJ,UnityEngine_Vector2_o IADAOAEBFEB,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  float fVar1;
  float val2;
  UnityEngine_Vector2_o UVar2;
  
  if ((DAT_04565cba & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04565cba = 1;
    method = extraout_x1;
  }
  if ((__this->fields).super.m_Vertical == false) {
    if ((__this->fields).super.m_Horizontal == false) {
      val2 = 0.0;
      fVar1 = 0.0;
    }
    else {
      fVar1 = FGKNNDKHOGB.fields.x - KFCJCEIBICJ.fields.x * IADAOAEBFEB.fields.x;
      val2 = FGKNNDKHOGB.fields.x + KFCJCEIBICJ.fields.x * (1.0 - IADAOAEBFEB.fields.x);
    }
  }
  else {
    fVar1 = FGKNNDKHOGB.fields.y - KFCJCEIBICJ.fields.y * IADAOAEBFEB.fields.y;
    val2 = FGKNNDKHOGB.fields.y + KFCJCEIBICJ.fields.y * (1.0 - IADAOAEBFEB.fields.y);
  }
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Math_TypeInfo,method);
  }
  UVar2.fields.x = System_Math__Min(fVar1,val2,(MethodInfo *)0x0);
  fVar1 = System_Math__Max(fVar1,val2,(MethodInfo *)0x0);
  UVar2.fields.y = fVar1;
  return (UnityEngine_Vector2_o)UVar2.fields;
}


// ===== public bool IsUsePool()  [RVA 0x302AD00]
// Nekki.SF2.GUI.SimpleScroll$$IsUsePool @ RVA 0x302AD00

bool Nekki_SF2_GUI_SimpleScroll__IsUsePool(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  return (__this->fields).HBNEMFAMCED !=
         (System_Collections_Generic_Dictionary_string__SimpleScroll_LIOIEDNIMLD__o *)0x0;
}


// ===== public RectTransform get_RectTransform()  [RVA 0x302AD10]
// Nekki.SF2.GUI.SimpleScroll$$get_RectTransform @ RVA 0x302AD10

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_SimpleScroll__get_RectTransform
          (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  
  if ((DAT_04565cbb & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04565cbb = 1;
  }
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    if (pUVar1->klass != UnityEngine_RectTransform_TypeInfo) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
  }
  return pUVar1;
}


// ===== private void HGDFKDAJKOB(ref Vector2 JGMCOMCBLPG)  [RVA 0x302AD74]
// Nekki.SF2.GUI.SimpleScroll$$HGDFKDAJKOB @ RVA 0x302AD74

void Nekki_SF2_GUI_SimpleScroll__HGDFKDAJKOB
               (Nekki_SF2_GUI_SimpleScroll_o *__this,UnityEngine_Vector2_o *JGMCOMCBLPG,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Rect_o UVar7;
  
  if (((__this->fields).super.m_Horizontal != false) &&
     (*(char *)((long)&(__this->fields)._visibilityChecker + 1) == '\0')) {
    pUVar2 = (__this->fields).super.m_Viewport;
    if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312ae90;
    fVar5 = *(float *)&(__this->fields).GCNFFAAPOKE;
    UVar7 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
    fVar6 = 0.0;
    if (fVar5 <= UVar7.fields.m_Width) {
      fVar3 = 0.0;
    }
    else {
      pUVar2 = (__this->fields).super.m_Viewport;
      if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312ae90;
      UVar7 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
      bVar1 = Nekki_SF2_GUI_SimpleScroll__get_IsXcenter(__this,method_00);
      fVar3 = 0.0;
      fVar6 = 0.0;
      if (bVar1) {
        if ((__this->fields).GNMNFMOHDMG.fields == (UnityEngine_Vector2_Fields)0x0) {
          fVar5 = fVar5 - UVar7.fields.m_Width;
          fVar6 = fVar5 * 0.5;
          fVar3 = fVar5 * -0.5;
        }
        else {
          pUVar2 = Nekki_SF2_GUI_SimpleScroll__FNJPFFGAMPF(__this,method_01);
          if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) {
LAB_0312ae90:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          UVar7 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
          pUVar2 = Nekki_SF2_GUI_SimpleScroll__CDDJEKNJPEN(__this,method_02);
          if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312ae90;
          fVar6 = fVar5 * 0.5 - UVar7.fields.m_Height * 0.5;
          UVar7 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
          fVar3 = UVar7.fields.m_Height * 0.5 - fVar5 * 0.5;
        }
      }
    }
    fVar4 = (JGMCOMCBLPG->fields).x;
    fVar5 = fVar6 + -0.001;
    if (fVar4 <= fVar6 + -0.001) {
      fVar5 = fVar4;
    }
    if (fVar4 < fVar3 + 0.001) {
      fVar5 = fVar3 + 0.001;
    }
    (JGMCOMCBLPG->fields).x = fVar5;
  }
  return;
}


// ===== public void add_OnEndDragging(Action CJNHFNHJHPE)  [RVA 0x302AFC8]
// Nekki.SF2.GUI.SimpleScroll$$add_OnEndDragging @ RVA 0x302AFC8

void Nekki_SF2_GUI_SimpleScroll__add_OnEndDragging
               (Nekki_SF2_GUI_SimpleScroll_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method
               )

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = CJNHFNHJHPE;
  auVar1._0_8_ = __this;
  if ((DAT_04565cbc & 1) == 0) {
    auVar1 = FUN_01bab630(&System_Action_TypeInfo);
    DAT_04565cbc = 1;
  }
  FUN_03f939c8(auVar1._0_8_,auVar1._8_8_);
  return;
}


// ===== public void add_OnScroll(Action<BaseScrollItem> CJNHFNHJHPE)  [RVA 0x302B068]
// Nekki.SF2.GUI.SimpleScroll$$add_OnScroll @ RVA 0x302B068

void Nekki_SF2_GUI_SimpleScroll__add_OnScroll
               (Nekki_SF2_GUI_SimpleScroll_o *__this,System_Action_BaseScrollItem__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_BaseScrollItem__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_o *pSVar5;
  System_Action_o *a;
  
  if ((DAT_04565cbd & 1) == 0) {
    FUN_01bab630(&System_Action<BaseScrollItem>_TypeInfo);
    DAT_04565cbd = 1;
  }
  a = (__this->fields).JFFDCLAAPBE;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<BaseScrollItem>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<BaseScrollItem>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_o *)FUN_01c07368(&(__this->fields).JFFDCLAAPBE,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void set_SnapTime(float CJNHFNHJHPE)  [RVA 0x302B11C]
// Nekki.SF2.GUI.SimpleScroll$$set_SnapTime @ RVA 0x302B11C

void Nekki_SF2_GUI_SimpleScroll__set_SnapTime
               (Nekki_SF2_GUI_SimpleScroll_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  *(float *)&(__this->fields).field_0x14c = CJNHFNHJHPE;
  return;
}


// ===== private void GFLOBMPEFEI()  [RVA 0x302B124]
// Nekki.SF2.GUI.SimpleScroll$$GFLOBMPEFEI @ RVA 0x302B124

void Nekki_SF2_GUI_SimpleScroll__GFLOBMPEFEI
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  System_Action_BaseScrollItem__o *pSVar1;
  
  (*(__this->klass->vtable)._41_StopMovement.methodPtr)
            (__this,(__this->klass->vtable)._41_StopMovement.method);
  pSVar1 = (__this->fields).FOKMEOHPDJL;
  if (pSVar1 != (System_Action_BaseScrollItem__o *)0x0) {
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    *(undefined2 *)&(__this->fields).NMIHOKCDLMP = 2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_Snap(bool CJNHFNHJHPE)  [RVA 0x302B168]
// Nekki.SF2.GUI.SimpleScroll$$set_Snap @ RVA 0x302B168

void Nekki_SF2_GUI_SimpleScroll__set_Snap
               (Nekki_SF2_GUI_SimpleScroll_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  *(bool *)&(__this->fields)._visibilityChecker = CJNHFNHJHPE;
  return;
}


// ===== public void ScrollToNextItems(int MJBMLNKAPGC, float PNEIGGOFIOA, Ease GAJONDLDKLI = 8)  [RVA 0x302B174]
// Nekki.SF2.GUI.SimpleScroll$$ScrollToNextItems @ RVA 0x302B174

void Nekki_SF2_GUI_SimpleScroll__ScrollToNextItems
               (Nekki_SF2_GUI_SimpleScroll_o *__this,int32_t MJBMLNKAPGC,float PNEIGGOFIOA,
               int32_t GAJONDLDKLI,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
  if ((*(char *)&(__this->fields).LNAPCDLIOOE == '\0') &&
     (bVar1 = Nekki_SF2_GUI_SimpleScroll__CanInvokeScrolling
                        (__this,(MethodInfo *)(ulong)(uint)MJBMLNKAPGC), bVar1)) {
    Nekki_SF2_GUI_SimpleScroll__ICHICAKKILG(__this,method_00);
    Nekki_SF2_GUI_SimpleScroll__JJNHMFIKFBM(__this,MJBMLNKAPGC,PNEIGGOFIOA,GAJONDLDKLI,method);
    return;
  }
  return;
}


// ===== private RectTransform FNJPFFGAMPF()  [RVA 0x302AED4]
// Nekki.SF2.GUI.SimpleScroll$$FNJPFFGAMPF @ RVA 0x302AED4

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_SimpleScroll__FNJPFFGAMPF(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565cbe & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04565cbe = 1;
    method = extraout_x1;
  }
  pUVar1 = (__this->fields).super.m_Content;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    pUVar1 = (UnityEngine_RectTransform_o *)
             UnityEngine_Transform__GetChild
                       ((UnityEngine_Transform_o *)pUVar1,
                        (uint)((__this->fields).GNMNFMOHDMG.fields !=
                              (UnityEngine_Vector2_Fields)0x0),(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      if (pUVar1->klass != UnityEngine_RectTransform_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
    }
    return pUVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void ArrangeBySiblingIndex()  [RVA 0x302B248]
// Nekki.SF2.GUI.SimpleScroll$$ArrangeBySiblingIndex @ RVA 0x302B248

void Nekki_SF2_GUI_SimpleScroll__ArrangeBySiblingIndex
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_IEnumerable_T__o *collection;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  System_Collections_Generic_IEnumerable_T__c *pSVar3;
  undefined8 uVar4;
  MethodInfo *extraout_x1;
  long lVar5;
  System_Collections_Generic_List_object__o *pSVar6;
  int index;
  
  if ((DAT_04565cbf & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_BaseScrollItem___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<BaseScrollItem>_TypeInfo);
    DAT_04565cbf = 1;
    method = extraout_x1;
  }
  if (*(char *)&(__this->fields).LNAPCDLIOOE != '\0') {
    return;
  }
  Nekki_SF2_GUI_SimpleScroll__ICHICAKKILG(__this,method);
  lVar5 = *(long *)&(__this->fields)._snapEase;
  if (lVar5 != 0) {
    piVar1 = &(__this->fields)._snapEase;
    collection = (System_Collections_Generic_IEnumerable_T__o *)
                 FUN_01bab718(Nekki_SF2_GUI_BaseScrollItem___TypeInfo,*(undefined4 *)(lVar5 + 0x18))
    ;
    pSVar6 = *(System_Collections_Generic_List_object__o **)piVar1;
    if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
      index = 0;
      while( true ) {
        if ((pSVar6->fields)._size <= index) {
          pSVar6 = (System_Collections_Generic_List_object__o *)
                   thunk_FUN_01bda818(System_Collections_Generic_List<BaseScrollItem>_TypeInfo);
          System_Collections_Generic_List<object>___ctor
                    (pSVar6,collection,
                     Method_System_Collections_Generic_List<BaseScrollItem>__ctor__);
          *(System_Collections_Generic_List_object__o **)piVar1 = pSVar6;
          thunk_FUN_01c20e04(piVar1,pSVar6);
          return;
        }
        __this_00 = (UnityEngine_Component_o *)
                    System_Collections_Generic_List<object>__get_Item
                              (pSVar6,index,
                               Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
        if ((__this_00 == (UnityEngine_Component_o *)0x0) ||
           (__this_01 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0),
           __this_01 == (UnityEngine_Transform_o *)0x0)) break;
        uVar2 = UnityEngine_Transform__GetSiblingIndex(__this_01,(MethodInfo *)0x0);
        if ((*(System_Collections_Generic_List_object__o **)piVar1 ==
             (System_Collections_Generic_List_object__o *)0x0) ||
           (pSVar3 = (System_Collections_Generic_IEnumerable_T__c *)
                     System_Collections_Generic_List<object>__get_Item
                               (*(System_Collections_Generic_List_object__o **)piVar1,index,
                                Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__),
           collection == (System_Collections_Generic_IEnumerable_T__o *)0x0)) break;
        if ((pSVar3 != (System_Collections_Generic_IEnumerable_T__c *)0x0) &&
           (lVar5 = thunk_FUN_01bda71c(pSVar3,(collection->klass->_1).element_class), lVar5 == 0)) {
          uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar4,0);
        }
        if (*(uint *)&collection[1].monitor <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        (&collection[2].klass)[(int)uVar2] = pSVar3;
        thunk_FUN_01c20e04(&collection[2].klass + (int)uVar2,pSVar3);
        pSVar6 = *(System_Collections_Generic_List_object__o **)piVar1;
        index = index + 1;
        if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) break;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JKALGOKABOK(int NFGLPIJICGF)  [RVA 0x302B3FC]
// Nekki.SF2.GUI.SimpleScroll$$JKALGOKABOK @ RVA 0x302B3FC

void Nekki_SF2_GUI_SimpleScroll__JKALGOKABOK
               (Nekki_SF2_GUI_SimpleScroll_o *__this,int32_t NFGLPIJICGF,MethodInfo *method)

{
  UnityEngine_RectTransform_o *PCGLODOMIMD;
  bool bVar1;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_RectTransform_o *LJNNKKMHFGO;
  System_String_o *pSVar2;
  System_String_o *str3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *in_x3;
  MethodInfo *pMVar3;
  long lVar4;
  uint uVar5;
  UnityEngine_RectTransform_o *PLDLIICJOEC;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Rect_o UVar9;
  UnityEngine_Vector2_o MJBMLNKAPGC;
  
  do {
    pMVar3 = (MethodInfo *)(ulong)(uint)NFGLPIJICGF;
    if ((DAT_04565cc0 & 1) == 0) {
      FUN_01bab630(&UnityEngine_Debug_TypeInfo);
      FUN_01bab630(&UnityEngine_Object_TypeInfo);
      FUN_01bab630(&StringLiteral_6480/*"FirstItem = "*/);
      FUN_01bab630(&StringLiteral_181/*"   LastItem = "*/);
      DAT_04565cc0 = 1;
      pMVar3 = extraout_x1;
    }
    if (NFGLPIJICGF < 1) {
      return;
    }
    __this_00 = Nekki_SF2_GUI_SimpleScroll__FNJPFFGAMPF(__this,pMVar3);
    LJNNKKMHFGO = Nekki_SF2_GUI_SimpleScroll__CDDJEKNJPEN(__this,method_00);
    if ((__this->fields).super.m_Vertical == false) {
      if ((__this->fields).super.m_Horizontal != false) {
        if ((__this->fields).KFDLOCBGNEA.fields.x < 0.0) goto LAB_0312b4b8;
        if (0.0 < (__this->fields).KFDLOCBGNEA.fields.x) goto LAB_0312b4d0;
      }
LAB_0312b4dc:
      uVar5 = 0;
      PLDLIICJOEC = (UnityEngine_RectTransform_o *)0x0;
    }
    else {
      fVar6 = (__this->fields).KFDLOCBGNEA.fields.y;
      if (0.0 < fVar6) {
LAB_0312b4b8:
        uVar5 = 1;
        PLDLIICJOEC = LJNNKKMHFGO;
      }
      else {
        if (0.0 <= fVar6) goto LAB_0312b4dc;
LAB_0312b4d0:
        uVar5 = 0;
        PLDLIICJOEC = __this_00;
      }
    }
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)PLDLIICJOEC,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    bVar1 = Nekki_SF2_GUI_SimpleScroll__MEIKBHLKJJK
                      (__this,PLDLIICJOEC,(bool)(SUB41(uVar5,0) ^ 1),in_x3);
    if (!bVar1) {
      return;
    }
    if ((__this_00 == (UnityEngine_RectTransform_o *)0x0) ||
       (pSVar2 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0),
       LJNNKKMHFGO == (UnityEngine_RectTransform_o *)0x0)) {
LAB_0312b6cc:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    str3 = UnityEngine_Object__get_name((UnityEngine_Object_o *)LJNNKKMHFGO,(MethodInfo *)0x0);
    pMVar3 = (MethodInfo *)0x0;
    pSVar2 = System_String__Concat
                       (StringLiteral_6480/*"FirstItem = "*/,pSVar2,StringLiteral_181/*"   LastItem = "*/,str3,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__Log((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
    PCGLODOMIMD = __this_00;
    if (uVar5 == 0) {
      PCGLODOMIMD = LJNNKKMHFGO;
      LJNNKKMHFGO = __this_00;
    }
    in_x3 = (MethodInfo *)(ulong)uVar5;
    Nekki_SF2_GUI_SimpleScroll__EPFNMJMKCMO
              (__this,(UnityEngine_Transform_o *)LJNNKKMHFGO,(UnityEngine_Transform_o *)PCGLODOMIMD,
               SUB41(uVar5,0),pMVar3);
    lVar4 = *(long *)&(__this->fields).ANKHPKGAHCA;
    if (lVar4 == 0) goto LAB_0312b6cc;
    fVar6 = *(float *)(lVar4 + 0x60);
    if (DAT_0455fa7e == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa7e = '\x01';
    }
    if (PLDLIICJOEC == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312b6cc;
    fVar8 = (UnityEngine_Vector2_TypeInfo->static_fields->oneVector).fields.x;
    fVar7 = (UnityEngine_Vector2_TypeInfo->static_fields->oneVector).fields.y;
    UVar9 = UnityEngine_RectTransform__get_rect(PLDLIICJOEC,(MethodInfo *)0x0);
    fVar7 = fVar6 * fVar7 + UVar9.fields.m_Height;
    fVar6 = fVar6 * fVar8 + UVar9.fields.m_Width;
    fVar8 = -fVar7;
    if (uVar5 == 0) {
      fVar8 = fVar7;
    }
    if ((__this->fields).super.m_Vertical != false) {
      fVar6 = 0.0;
      fVar7 = fVar8;
    }
    bVar1 = (__this->fields).super.m_Horizontal != false;
    if (bVar1) {
      fVar7 = 0.0;
    }
    if (bVar1 && uVar5 == 0) {
      fVar6 = -fVar6;
    }
    UnityEngine_UI_ScrollRect__StopMovement((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0)
    ;
    fVar8 = (__this->fields).AOLPGMKLBGK.fields.y;
    (__this->fields).AOLPGMKLBGK.fields.x = (__this->fields).AOLPGMKLBGK.fields.x + fVar6;
    (__this->fields).AOLPGMKLBGK.fields.y = fVar8 + fVar7;
    MJBMLNKAPGC.fields.y = fVar7;
    MJBMLNKAPGC.fields.x = fVar6;
    Nekki_SF2_GUI_SimpleScroll__PBDJKOPCAOK(__this,MJBMLNKAPGC,method_01);
    Nekki_SF2_GUI_SimpleScroll__RebuildLayout(__this,method_02);
    *(undefined2 *)&(__this->fields).NMIHOKCDLMP = 2;
    NFGLPIJICGF = NFGLPIJICGF - 1;
  } while( true );
}


// ===== public void AddItem(BaseScrollItem IKKAMAMLIKA, bool FKNKAMAGHAI = True)  [RVA 0x302B960]
// Nekki.SF2.GUI.SimpleScroll$$AddItem @ RVA 0x302B960

void Nekki_SF2_GUI_SimpleScroll__AddItem
               (Nekki_SF2_GUI_SimpleScroll_o *__this,Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,
               bool FKNKAMAGHAI,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  int32_t index;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Transform_o *parent;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_01;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *extraout_x1_05;
  MethodInfo *extraout_x1_06;
  MethodInfo *pMVar5;
  System_Object_array *pSVar6;
  long lVar7;
  float fVar8;
  UnityEngine_Vector2_Fields UVar9;
  UnityEngine_Vector2_Fields UVar10;
  UnityEngine_Vector2_o UVar11;
  UnityEngine_Vector2_o value;
  float local_50;
  float local_40;
  
  if ((DAT_04565cc1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    DAT_04565cc1 = 1;
  }
  lVar7 = Method_System_Collections_Generic_List<BaseScrollItem>_Add__;
  if (*(char *)&(__this->fields).LNAPCDLIOOE != '\0') {
    return;
  }
  __this_00 = *(System_Collections_Generic_List_object__o **)&(__this->fields)._snapEase;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar6 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar6 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar6->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar6->m_Items[(int)uVar1] = (Il2CppObject *)IKKAMAMLIKA;
        thunk_FUN_01c20e04(pSVar6->m_Items + (int)uVar1,IKKAMAMLIKA);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)IKKAMAMLIKA,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      if (IKKAMAMLIKA != (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) {
        (*(IKKAMAMLIKA->klass->vtable)._47_EnableVisibility.methodPtr)
                  (IKKAMAMLIKA,(ulong)FKNKAMAGHAI,
                   (IKKAMAMLIKA->klass->vtable)._47_EnableVisibility.method);
        pMVar5 = method_00;
        if ((__this->fields).super.m_Vertical != false) {
          bVar2 = Nekki_SF2_GUI_SimpleScroll__get_IsYUp(__this,method_00);
          pMVar5 = extraout_x1;
          if (bVar2) {
            pUVar3 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform(IKKAMAMLIKA,(MethodInfo *)0x0);
            if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312bcf0;
            UnityEngine_RectTransform__set_pivot
                      (pUVar3,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
            pMVar5 = extraout_x1_00;
          }
          bVar2 = Nekki_SF2_GUI_SimpleScroll__get_IsYcenter(__this,pMVar5);
          pMVar5 = extraout_x1_01;
          if (bVar2) {
            pUVar3 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform(IKKAMAMLIKA,(MethodInfo *)0x0);
            if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312bcf0;
            UnityEngine_RectTransform__set_pivot
                      (pUVar3,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
            pMVar5 = extraout_x1_02;
          }
        }
        if (((__this->fields).super.m_Horizontal != false) &&
           (bVar2 = Nekki_SF2_GUI_SimpleScroll__get_IsXcenter(__this,pMVar5), bVar2)) {
          pUVar3 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform(IKKAMAMLIKA,(MethodInfo *)0x0);
          __this_01 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform(IKKAMAMLIKA,(MethodInfo *)0x0)
          ;
          if (__this_01 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312bcf0;
          UVar11 = UnityEngine_RectTransform__get_pivot(__this_01,(MethodInfo *)0x0);
          if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312bcf0;
          UVar11.fields.y = (float)((ulong)UVar11.fields >> 0x20);
          UVar11.fields.x = 0.5;
          UnityEngine_RectTransform__set_pivot(pUVar3,UVar11,(MethodInfo *)0x0);
        }
        pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)IKKAMAMLIKA,(MethodInfo *)0x0);
        pUVar3 = (__this->fields).super.m_Content;
        if ((pUVar3 != (UnityEngine_RectTransform_o *)0x0) &&
           (parent = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
           pUVar4 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetParent(pUVar4,parent,false,(MethodInfo *)0x0);
          pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)IKKAMAMLIKA,(MethodInfo *)0x0);
          index = Nekki_SF2_GUI_SimpleScroll__LEJPCCHDLBN(__this,method_01);
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetSiblingIndex(pUVar4,index,(MethodInfo *)0x0);
            lVar7 = *(long *)&(__this->fields)._snapEase;
            *(undefined1 *)((long)&(__this->fields).NMIHOKCDLMP + 2) = 1;
            *(undefined2 *)&(__this->fields).NMIHOKCDLMP = 2;
            if (lVar7 != 0) {
              if (*(int *)(lVar7 + 0x18) < 2) {
                *(undefined1 *)((long)&(__this->fields).NMIHOKCDLMP + 3) = 1;
                return;
              }
              pMVar5 = extraout_x1_03;
              if (DAT_0455fa75 == '\0') {
                FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
                DAT_0455fa75 = '\x01';
                pMVar5 = extraout_x1_04;
              }
              local_50 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.x;
              local_40 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.y;
              if (((__this->fields).super.m_Vertical != false) &&
                 (fVar8 = local_50, bVar2 = Nekki_SF2_GUI_SimpleScroll__get_IsYcenter(__this,pMVar5)
                 , pMVar5 = extraout_x1_05, bVar2)) {
                (*(IKKAMAMLIKA->klass->vtable)._51_get_Size.methodPtr)
                          (IKKAMAMLIKA,(IKKAMAMLIKA->klass->vtable)._51_get_Size.method);
                pUVar3 = (__this->fields).super.m_Content;
                if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312bcf0;
                UVar11 = UnityEngine_RectTransform__get_pivot(pUVar3,(MethodInfo *)0x0);
                lVar7 = *(long *)&(__this->fields).ANKHPKGAHCA;
                if (lVar7 == 0) goto LAB_0312bcf0;
                local_40 = (1.0 - UVar11.fields.y) * -fVar8 - *(float *)(lVar7 + 0x60);
                pMVar5 = extraout_x1_06;
              }
              if (((__this->fields).super.m_Horizontal != false) &&
                 (bVar2 = Nekki_SF2_GUI_SimpleScroll__get_IsXcenter(__this,pMVar5), bVar2)) {
                fVar8 = (float)(*(IKKAMAMLIKA->klass->vtable)._51_get_Size.methodPtr)
                                         (IKKAMAMLIKA,
                                          (IKKAMAMLIKA->klass->vtable)._51_get_Size.method);
                pUVar3 = (__this->fields).super.m_Content;
                if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312bcf0;
                UVar11 = UnityEngine_RectTransform__get_pivot(pUVar3,(MethodInfo *)0x0);
                lVar7 = *(long *)&(__this->fields).ANKHPKGAHCA;
                if (lVar7 == 0) goto LAB_0312bcf0;
                local_50 = fVar8 * (1.0 - UVar11.fields.x) + *(float *)(lVar7 + 0x60);
              }
              pUVar3 = (__this->fields).super.m_Content;
              if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                UVar11 = UnityEngine_RectTransform__get_anchoredPosition(pUVar3,(MethodInfo *)0x0);
                value.fields.x = local_50 + UVar11.fields.x;
                value.fields.y = local_40 + UVar11.fields.y;
                UnityEngine_RectTransform__set_anchoredPosition(pUVar3,value,(MethodInfo *)0x0);
                UVar9 = (__this->fields).super.m_ContentStartPosition.fields;
                pUVar3 = (__this->fields).super.m_Content;
                UVar10.x = local_50 + UVar9.x;
                UVar10.y = local_40 + UVar9.y;
                (__this->fields).super.m_ContentStartPosition.fields = UVar10;
                if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                  UVar11 = UnityEngine_RectTransform__get_anchoredPosition(pUVar3,(MethodInfo *)0x0)
                  ;
                  (__this->fields).IFDBJFNPOEK.fields.x = UVar11.fields.x;
                  (__this->fields).IFDBJFNPOEK.fields.y = UVar11.fields.y;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0312bcf0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void remove_OnBeginDragging(Action CJNHFNHJHPE)  [RVA 0x302BD44]
// Nekki.SF2.GUI.SimpleScroll$$remove_OnBeginDragging @ RVA 0x302BD44

void Nekki_SF2_GUI_SimpleScroll__remove_OnBeginDragging
               (Nekki_SF2_GUI_SimpleScroll_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method
               )

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o *source;
  
  if ((DAT_04565cc2 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04565cc2 = 1;
  }
  source = (__this->fields).FOOOBJNPNEH;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(&(__this->fields).FOOOBJNPNEH,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public bool get_IsXcenter()  [RVA 0x302AE94]
// Nekki.SF2.GUI.SimpleScroll$$get_IsXcenter @ RVA 0x302AE94

bool Nekki_SF2_GUI_SimpleScroll__get_IsXcenter
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o UVar2;
  
  __this_00 = (__this->fields).super.m_Content;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar2 = UnityEngine_RectTransform__get_pivot(__this_00,(MethodInfo *)0x0);
    bVar1 = Util__JFJCDAJGFKD(UVar2.fields.x,0.5,0.01,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_SnapEase(Ease CJNHFNHJHPE)  [RVA 0x302BDE4]
// Nekki.SF2.GUI.SimpleScroll$$set_SnapEase @ RVA 0x302BDE4

void Nekki_SF2_GUI_SimpleScroll__set_SnapEase
               (Nekki_SF2_GUI_SimpleScroll_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._snap = (bool_conflict)(char)CJNHFNHJHPE;
  (__this->fields)._looped = (bool_conflict)(char)((uint)CJNHFNHJHPE >> 8);
  *(short *)&(__this->fields).field_0x14a = (short)((uint)CJNHFNHJHPE >> 0x10);
  return;
}


// ===== protected override void OnDestroy()  [RVA 0x302BDEC]
// Nekki.SF2.GUI.SimpleScroll$$OnDestroy @ RVA 0x302BDEC

void Nekki_SF2_GUI_SimpleScroll__OnDestroy(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04565cc3 & 1) == 0) {
    FUN_01bab630(&Util_TypeInfo);
    DAT_04565cc3 = 1;
    method = extraout_x1;
  }
  if (Util_TypeInfo->static_fields->IEGHLFIBMBL != false) {
    *(undefined1 *)&(__this->fields).LNAPCDLIOOE = 1;
    return;
  }
  Nekki_SF2_GUI_SimpleScroll__CCPABLFBFFA(__this,method);
  Nekki_SF2_GUI_SimpleScroll__ClearData(__this,method_00);
  *(undefined1 *)&(__this->fields).LNAPCDLIOOE = 1;
  UnityEngine_EventSystems_UIBehaviour__OnDestroy
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void ScrollToItem(int OGPGLGPMEPD, float PNEIGGOFIOA, Ease GAJONDLDKLI = 8)  [RVA 0x302A8D4]
// Nekki.SF2.GUI.SimpleScroll$$ScrollToItem @ RVA 0x302A8D4

void Nekki_SF2_GUI_SimpleScroll__ScrollToItem
               (Nekki_SF2_GUI_SimpleScroll_o *__this,int32_t OGPGLGPMEPD,float PNEIGGOFIOA,
               int32_t GAJONDLDKLI,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  System_Collections_Generic_List_object__o *__this_00;
  Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  
  method_00 = (MethodInfo *)(ulong)(uint)OGPGLGPMEPD;
  if ((DAT_04565cc4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
    DAT_04565cc4 = 1;
    method_00 = extraout_x1;
  }
  if ((*(char *)&(__this->fields).LNAPCDLIOOE == '\0') &&
     (bVar4 = Nekki_SF2_GUI_SimpleScroll__CanInvokeScrolling(__this,method_00), bVar4)) {
    Nekki_SF2_GUI_SimpleScroll__ICHICAKKILG(__this,method_01);
    __this_00 = *(System_Collections_Generic_List_object__o **)&(__this->fields)._snapEase;
    if (OGPGLGPMEPD < 0) {
      if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
LAB_0312aa18:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar1 = (__this_00->fields)._size;
      if (DAT_04561c43 == '\0') {
        FUN_01bab630(&System_Math_TypeInfo);
        DAT_04561c43 = '\x01';
      }
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = *(System_Collections_Generic_List_object__o **)&(__this->fields)._snapEase;
      if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0312aa18;
      iVar3 = (__this_00->fields)._size;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = OGPGLGPMEPD / iVar1;
      }
      iVar1 = -iVar2;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      OGPGLGPMEPD = iVar3 + OGPGLGPMEPD + iVar3 * iVar1;
    }
    else if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0312aa18;
    iVar1 = (__this_00->fields)._size;
    if (iVar1 <= OGPGLGPMEPD) {
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = OGPGLGPMEPD / iVar1;
      }
      OGPGLGPMEPD = OGPGLGPMEPD - iVar3 * iVar1;
    }
    if ((-1 < OGPGLGPMEPD) && (OGPGLGPMEPD < iVar1)) {
      IKKAMAMLIKA = (Nekki_SF2_GUI_BaseScrollItem_o *)
                    System_Collections_Generic_List<object>__get_Item
                              (__this_00,OGPGLGPMEPD,
                               Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
      Nekki_SF2_GUI_SimpleScroll__ScrollToItem(__this,IKKAMAMLIKA,PNEIGGOFIOA,GAJONDLDKLI,method);
      return;
    }
  }
  return;
}


// ===== public void set_Looped(bool CJNHFNHJHPE)  [RVA 0x302C230]
// Nekki.SF2.GUI.SimpleScroll$$set_Looped @ RVA 0x302C230

void Nekki_SF2_GUI_SimpleScroll__set_Looped
               (Nekki_SF2_GUI_SimpleScroll_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  *(bool *)((long)&(__this->fields)._visibilityChecker + 1) = CJNHFNHJHPE;
  return;
}


// ===== private int LEJPCCHDLBN()  [RVA 0x302BCF4]
// Nekki.SF2.GUI.SimpleScroll$$LEJPCCHDLBN @ RVA 0x302BCF4

int32_t Nekki_SF2_GUI_SimpleScroll__LEJPCCHDLBN
                  (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_RectTransform_o *__this_00;
  int iVar2;
  
  __this_00 = (__this->fields).super.m_Content;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    iVar1 = UnityEngine_Transform__get_childCount
                      ((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
    iVar2 = -2;
    if ((__this->fields).GNMNFMOHDMG.fields == (UnityEngine_Vector2_Fields)0x0) {
      iVar2 = -1;
    }
    return iVar2 + iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AddItems(IEnumerable<BaseScrollItem> GHAAKPDHIJJ, bool FKNKAMAGHAI = True)  [RVA 0x302C23C]
// Nekki.SF2.GUI.SimpleScroll$$AddItems @ RVA 0x302C23C

/* WARNING: Removing unreachable block (ram,0x0312c46c) */

void Nekki_SF2_GUI_SimpleScroll__AddItems
               (Nekki_SF2_GUI_SimpleScroll_o *__this,
               System_Collections_Generic_IEnumerable_BaseScrollItem__o *GHAAKPDHIJJ,
               bool FKNKAMAGHAI,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long *plVar3;
  undefined8 *puVar4;
  Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA;
  System_Collections_Generic_IEnumerable_BaseScrollItem__c *pSVar5;
  long lVar6;
  ulong uVar7;
  int32_t *piVar8;
  int *piVar9;
  
  if ((DAT_04565cc5 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<BaseScrollItem>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<BaseScrollItem>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    DAT_04565cc5 = 1;
  }
  if (GHAAKPDHIJJ == (System_Collections_Generic_IEnumerable_BaseScrollItem__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar5 = GHAAKPDHIJJ->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
  uVar7 = (ulong)uVar1;
  if (uVar7 != 0) {
    piVar8 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<BaseScrollItem>_TypeInfo) {
        pVVar2 = pSVar5->vtable + *piVar8;
        goto LAB_0312c2f4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(GHAAKPDHIJJ,System_Collections_Generic_IEnumerable<BaseScrollItem>_TypeInfo,
                        0);
LAB_0312c2f4:
  plVar3 = (long *)(*pVVar2->methodPtr)(GHAAKPDHIJJ,pVVar2->method);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0312c3f8 with catch @ 0312c468
                        */
    FUN_01bab8c8();
  }
  do {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0312c370;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_0312c370:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar7 & 1) == 0) break;
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_BaseScrollItem__c **)(piVar9 + -2) ==
            System_Collections_Generic_IEnumerator<BaseScrollItem>_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0312c3cc;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
                    /* try { // try from 0312c3b0 to 0322c3f7 has its CatchHandler @ 0312c3b0
                       catch() { ... } // from try @ 0312c3b0 with catch @ 0312c3b0
                       catch() { ... } // from try @ 0312c408 with catch @ 0312c3b0
                       catch() { ... } // from try @ 0312c49c with catch @ 0312c3b0
                       catch() { ... } // from try @ 0312c51c with catch @ 0312c3b0 */
    puVar4 = (undefined8 *)
             FUN_01b81914(plVar3,System_Collections_Generic_IEnumerator<BaseScrollItem>_TypeInfo,0);
LAB_0312c3cc:
    IKKAMAMLIKA = (Nekki_SF2_GUI_BaseScrollItem_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    Nekki_SF2_GUI_SimpleScroll__AddItem(__this,IKKAMAMLIKA,FKNKAMAGHAI,method);
  } while( true );
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
                    /* try { // try from 0312c3f8 to 0322c3fb has its CatchHandler @ 0312c468 */
                    /* try { // try from 0312c3fc to 0322c407 has its CatchHandler @ 0312c46c */
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
                    /* try { // try from 0312c408 to 0322c483 has its CatchHandler @ 0312c3b0 */
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0312c440;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_0312c440:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  return;
}


// ===== private void IGENILJIHFN(Vector2 MJBMLNKAPGC, float PNEIGGOFIOA, Ease GAJONDLDKLI)  [RVA 0x302C520]
// Nekki.SF2.GUI.SimpleScroll$$IGENILJIHFN @ RVA 0x302C520

void Nekki_SF2_GUI_SimpleScroll__IGENILJIHFN
               (Nekki_SF2_GUI_SimpleScroll_o *__this,UnityEngine_Vector2_o MJBMLNKAPGC,
               float PNEIGGOFIOA,int32_t GAJONDLDKLI,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  undefined8 uVar5;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  method_00 = (MethodInfo *)(ulong)(uint)GAJONDLDKLI;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0312c518 with catch @ 0312c524
                        */
  if ((DAT_04565cc6 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04565cc6 = 1;
    method_00 = extraout_x1;
  }
  Nekki_SF2_GUI_SimpleScroll__CCPABLFBFFA(__this,method_00);
  if (MJBMLNKAPGC.fields.x * MJBMLNKAPGC.fields.x + MJBMLNKAPGC.fields.y * MJBMLNKAPGC.fields.y <=
      0.1) {
    return;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar3 = Nekki_SF2_GUI_SimpleScroll__GMEOEFHKANF
                     (__this,MJBMLNKAPGC,PNEIGGOFIOA,GAJONDLDKLI,method);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar6 = pPVar2->klass;
  uVar1._0_1_ = (pPVar6->_2).rank;
  uVar1._1_1_ = (pPVar6->_2).minimumAlignment;
  uVar7 = (ulong)uVar1;
  if (uVar7 != 0) {
    piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar4 = pPVar6->vtable + *piVar8;
        goto LAB_0312c61c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,0);
LAB_0312c61c:
  uVar5 = (*pVVar4->methodPtr)(pPVar2,pSVar3,1,pVVar4->method);
  *(undefined8 *)&(__this->fields).JCKMKFCCNAA = uVar5;
  thunk_FUN_01c20e04(&(__this->fields).JCKMKFCCNAA);
  return;
}


// ===== private void ECJKHJHFOAF()  [RVA 0x302C654]
// Nekki.SF2.GUI.SimpleScroll$$ECJKHJHFOAF @ RVA 0x302C654

void Nekki_SF2_GUI_SimpleScroll__ECJKHJHFOAF
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  int32_t GAJONDLDKLI;
  bool bVar1;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  float fVar2;
  float fVar3;
  UnityEngine_Vector2_o MJBMLNKAPGC;
  
                    /* try { // try from 0312c6a0 to 0322c6e7 has its CatchHandler @ 0312c6a0
                       catch() { ... } // from try @ 0312c6a0 with catch @ 0312c6a0
                       catch() { ... } // from try @ 0312c6f8 with catch @ 0312c6a0
                       catch() { ... } // from try @ 0312c78c with catch @ 0312c6a0
                       catch() { ... } // from try @ 0312c80c with catch @ 0312c6a0 */
  if ((((*(char *)&(__this->fields)._visibilityChecker != '\0') &&
       (bVar1 = Nekki_SF2_GUI_SimpleScroll__CanInvokeScrolling(__this,method), bVar1)) &&
      (fVar2 = (__this->fields).KFDLOCBGNEA.fields.x, fVar3 = (__this->fields).KFDLOCBGNEA.fields.y,
      fVar2 * fVar2 + fVar3 * fVar3 < 0.1)) &&
     (MJBMLNKAPGC = Nekki_SF2_GUI_SimpleScroll__ODIEMJGFIFB(__this,method_00),
     0.5 < MJBMLNKAPGC.fields.x * MJBMLNKAPGC.fields.x + MJBMLNKAPGC.fields.y * MJBMLNKAPGC.fields.y
     )) {
    GAJONDLDKLI._0_1_ = (__this->fields)._snap;
    GAJONDLDKLI._1_1_ = (__this->fields)._looped;
    GAJONDLDKLI._2_2_ = *(undefined2 *)&(__this->fields).field_0x14a;
    Nekki_SF2_GUI_SimpleScroll__IGENILJIHFN
              (__this,MJBMLNKAPGC,*(float *)&(__this->fields).field_0x14c,GAJONDLDKLI,in_x2);
    return;
  }
  return;
}


// ===== private void EPFNMJMKCMO(Transform LJNNKKMHFGO, Transform PCGLODOMIMD, bool GJOPPHLHPMO)  [RVA 0x302B84C]
// Nekki.SF2.GUI.SimpleScroll$$EPFNMJMKCMO @ RVA 0x302B84C

void Nekki_SF2_GUI_SimpleScroll__EPFNMJMKCMO
               (Nekki_SF2_GUI_SimpleScroll_o *__this,UnityEngine_Transform_o *LJNNKKMHFGO,
               UnityEngine_Transform_o *PCGLODOMIMD,bool GJOPPHLHPMO,MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_Transform_o *pUVar2;
  MethodInfo *method_00;
  
  if ((LJNNKKMHFGO != (UnityEngine_Transform_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)LJNNKKMHFGO,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    iVar1 = UnityEngine_Transform__GetSiblingIndex(pUVar2,(MethodInfo *)0x0);
    if ((PCGLODOMIMD != (UnityEngine_Transform_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)PCGLODOMIMD,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetSiblingIndex
                (pUVar2,iVar1 - (~(uint)GJOPPHLHPMO & 1),(MethodInfo *)0x0);
      Nekki_SF2_GUI_SimpleScroll__POHJDOKIPBD(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_Looped()  [RVA 0x302C730]
// Nekki.SF2.GUI.SimpleScroll$$get_Looped @ RVA 0x302C730

bool Nekki_SF2_GUI_SimpleScroll__get_Looped(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  return (bool)*(undefined1 *)((long)&(__this->fields)._visibilityChecker + 1);
}


// ===== private void GHENENOBNFE()  [RVA 0x302C738]
// Nekki.SF2.GUI.SimpleScroll$$GHENENOBNFE @ RVA 0x302C738

void Nekki_SF2_GUI_SimpleScroll__GHENENOBNFE
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  MethodInfo *method_00;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  UnityEngine_Rect_o UVar6;
  UnityEngine_Vector2_o UVar7;
  ulong uVar2;
  
  UVar7 = Nekki_SF2_GUI_SimpleScroll__CIPFHAIEHPM(__this,method);
  uVar5 = (ulong)UVar7.fields >> 0x20;
  uVar2 = (ulong)UVar7.fields & 0xffffffff;
  uVar3 = uVar5;
  uVar4 = uVar2;
  if ((__this->fields).super.m_Vertical != false) {
    pUVar1 = (__this->fields).super.m_Viewport;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0312c6e8 with catch @ 0312c758
                        */
    if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312c7bc;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0312c6ec with catch @ 0312c75c
                        */
    UVar6 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
    uVar2 = (ulong)(uint)UVar6.fields.m_XMin;
    uVar3 = (ulong)(uint)UVar6.fields.m_YMin;
    uVar4 = (ulong)(uint)UVar6.fields.m_Width;
  }
                    /* try { // try from 0312c774 to 0322c78b has its CatchHandler @ 0312c804 */
  if ((__this->fields).super.m_Horizontal != false) {
    pUVar1 = (__this->fields).super.m_Viewport;
    if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312c7bc;
    UVar6 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
    uVar3 = (ulong)(uint)UVar6.fields.m_YMin;
    uVar2 = (ulong)(uint)UVar6.fields.m_XMin;
    uVar5 = (ulong)(uint)UVar6.fields.m_Height;
  }
                    /* try { // try from 0312c78c to 0322c7f3 has its CatchHandler @ 0312c6a0 */
  pUVar1 = (__this->fields).super.m_Content;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    UVar7.fields.x = (float)uVar4;
    UVar7.fields.y = (float)uVar5;
    UnityEngine_RectTransform__set_sizeDelta(pUVar1,UVar7,(MethodInfo *)0x0);
    Nekki_SF2_GUI_SimpleScroll__RebuildLayout(__this,method_00);
    *(undefined1 *)((long)&(__this->fields).NMIHOKCDLMP + 2) = 0;
    return;
  }
LAB_0312c7bc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar2,uVar3);
}


// ===== public void ForceInvokeOnScroll()  [RVA 0x302CB24]
// Nekki.SF2.GUI.SimpleScroll$$ForceInvokeOnScroll @ RVA 0x302CB24

void Nekki_SF2_GUI_SimpleScroll__ForceInvokeOnScroll
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_BaseScrollItem_o *pNVar1;
  System_Action_o *pSVar2;
  
  pSVar2 = (__this->fields).JFFDCLAAPBE;
  if (pSVar2 != (System_Action_o *)0x0) {
    pNVar1 = Nekki_SF2_GUI_SimpleScroll__MOKNJIIEIMG(__this,method);
                    /* WARNING: Could not recover jumptable at 0x0312cb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,pNVar1,(pSVar2->fields).super.super.method);
    return;
  }
  return;
}


// ===== private void MPBMFLMKNLC(BaseScrollItem GEEJDFDHOFA, BaseScrollItem HIMELABOAHB)  [RVA 0x302CE6C]
// Nekki.SF2.GUI.SimpleScroll$$MPBMFLMKNLC @ RVA 0x302CE6C

void Nekki_SF2_GUI_SimpleScroll__MPBMFLMKNLC
               (Nekki_SF2_GUI_SimpleScroll_o *__this,Nekki_SF2_GUI_BaseScrollItem_o *GEEJDFDHOFA,
               Nekki_SF2_GUI_BaseScrollItem_o *HIMELABOAHB,MethodInfo *method)

{
  uint index;
  int32_t index_00;
  UnityEngine_Transform_o *pUVar1;
  
                    /* try { // try from 0312ce78 to 0322ce7b has its CatchHandler @ 0312cee8 */
                    /* try { // try from 0312ce7c to 0322ce87 has its CatchHandler @ 0312ceec */
                    /* try { // try from 0312ce88 to 0322cf03 has its CatchHandler @ 0312ce30 */
  if ((GEEJDFDHOFA != (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) &&
     (pUVar1 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)GEEJDFDHOFA,(MethodInfo *)0x0),
     __this = (Nekki_SF2_GUI_SimpleScroll_o *)0x0, pUVar1 != (UnityEngine_Transform_o *)0x0)) {
    index = UnityEngine_Transform__GetSiblingIndex(pUVar1,(MethodInfo *)0x0);
    __this = (Nekki_SF2_GUI_SimpleScroll_o *)(ulong)index;
    if ((HIMELABOAHB != (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) &&
       (pUVar1 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)HIMELABOAHB,(MethodInfo *)0x0),
       __this = (Nekki_SF2_GUI_SimpleScroll_o *)0x0, pUVar1 != (UnityEngine_Transform_o *)0x0)) {
      index_00 = UnityEngine_Transform__GetSiblingIndex(pUVar1,(MethodInfo *)0x0);
      pUVar1 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)GEEJDFDHOFA,(MethodInfo *)0x0);
      __this = (Nekki_SF2_GUI_SimpleScroll_o *)0x0;
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetSiblingIndex(pUVar1,index_00,(MethodInfo *)0x0);
        pUVar1 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)HIMELABOAHB,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0312ce78 with catch @ 0312cee8
                        */
        __this = (Nekki_SF2_GUI_SimpleScroll_o *)0x0;
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0312ce7c with catch @ 0312ceec
                        */
          UnityEngine_Transform__SetSiblingIndex(pUVar1,index,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0312cf04 to 0322cf1b has its CatchHandler @ 0312cf94 */
  FUN_01bab8c8(__this);
}


// ===== public float GetScrollPos()  [RVA 0x302CF08]
// Nekki.SF2.GUI.SimpleScroll$$GetScrollPos @ RVA 0x302CF08

float Nekki_SF2_GUI_SimpleScroll__GetScrollPos
                (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  float fVar1;
  
  if ((__this->fields).super.m_Vertical != false) {
    fVar1 = Nekki_SF2_GUI_SimpleScroll__GetScrollY(__this,method);
    return fVar1;
  }
  if ((__this->fields).super.m_Horizontal != false) {
                    /* try { // try from 0312cf1c to 0322cf83 has its CatchHandler @ 0312ce30 */
    fVar1 = Nekki_SF2_GUI_SimpleScroll__GetScrollX(__this,method);
    return fVar1;
  }
  return 0.0;
}


// ===== public float GetScrollY()  [RVA 0x302CF28]
// Nekki.SF2.GUI.SimpleScroll$$GetScrollY @ RVA 0x302CF28

float Nekki_SF2_GUI_SimpleScroll__GetScrollY
                (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o UVar1;
  
  __this_00 = (__this->fields).super.m_Content;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_anchoredPosition(__this_00,(MethodInfo *)0x0);
    return UVar1.fields.y;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CCPABLFBFFA()  [RVA 0x302A3A0]
// Nekki.SF2.GUI.SimpleScroll$$CCPABLFBFFA @ RVA 0x302A3A0

void Nekki_SF2_GUI_SimpleScroll__CCPABLFBFFA
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  bool_conflict *pbVar1;
  ushort uVar2;
  PBAKFOBIHEG_o *pPVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  undefined8 uVar8;
  
  if ((DAT_04565cc7 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04565cc7 = 1;
  }
  if (*(long *)&(__this->fields).JCKMKFCCNAA == 0) {
    return;
  }
  pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar3 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar5 = pPVar3->klass;
  pbVar1 = &(__this->fields).JCKMKFCCNAA;
  uVar8 = *(undefined8 *)pbVar1;
  uVar2._0_1_ = (pPVar5->_2).rank;
  uVar2._1_1_ = (pPVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar2;
  if (uVar6 != 0) {
    piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar4 = pPVar5->vtable + (*piVar7 + 1);
        goto LAB_0312a458;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,1);
LAB_0312a458:
  (*pVVar4->methodPtr)(pPVar3,uVar8,pVVar4->method);
  *(undefined8 *)&(__this->fields).JCKMKFCCNAA = 0;
  thunk_FUN_01c20e04(pbVar1,0);
  Nekki_SF2_GUI_SimpleScroll__GFLOBMPEFEI(__this,method_00);
  return;
}


// ===== private void EBBHJNKGOJB()  [RVA 0x302CF68]
// Nekki.SF2.GUI.SimpleScroll$$EBBHJNKGOJB @ RVA 0x302CF68

void Nekki_SF2_GUI_SimpleScroll__EBBHJNKGOJB
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  if (__this != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    *(ushort *)&(__this->fields).POPINJOHFLF = (__this->fields).super.m_Horizontal ^ 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0312cf84 to 0322cf93 has its CatchHandler @ 0312cf94 */
  FUN_01bab8c8();
}


// ===== private void JJLHMNAMHIL()  [RVA 0x302CF88]
// Nekki.SF2.GUI.SimpleScroll$$JJLHMNAMHIL @ RVA 0x302CF88

void Nekki_SF2_GUI_SimpleScroll__JJLHMNAMHIL
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  long lVar2;
  float fVar3;
  float fVar4;
  
                    /* catch() { ... } // from try @ 0312cf04 with catch @ 0312cf94
                       catch() { ... } // from try @ 0312cf84 with catch @ 0312cf94 */
                    /* try { // try from 0312cf98 to 0322cf9b has its CatchHandler @ 0312cfa4 */
                    /* try { // try from 0312cf9c to 0322cfa7 has its CatchHandler @ 0312ce30 */
  if ((DAT_04565cc8 & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0312cf98 with catch @ 0312cfa4
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    DAT_04565cc8 = 1;
    method = extraout_x1;
  }
  if (*(char *)((long)&(__this->fields)._visibilityChecker + 1) == '\0') {
    return;
  }
  lVar2 = *(long *)&(__this->fields)._snapEase;
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) < 2) {
      return;
    }
    fVar3 = (__this->fields).KFDLOCBGNEA.fields.x;
    fVar4 = (__this->fields).KFDLOCBGNEA.fields.y;
    if (fVar3 * fVar3 + fVar4 * fVar4 < 0.01) {
      return;
    }
    bVar1 = Nekki_SF2_GUI_SimpleScroll__IsContentBiggerThanView(__this,method);
    if (!bVar1) {
      return;
    }
    lVar2 = *(long *)&(__this->fields)._snapEase;
    if (lVar2 != 0) {
      Nekki_SF2_GUI_SimpleScroll__JKALGOKABOK(__this,*(int *)(lVar2 + 0x18) + -1,in_x2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void LateUpdate()  [RVA 0x302D0E0]
// Nekki.SF2.GUI.SimpleScroll$$LateUpdate @ RVA 0x302D0E0

void Nekki_SF2_GUI_SimpleScroll__LateUpdate(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  Nekki_SF2_GUI_BaseScrollItem_o *pNVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_Action_o *pSVar4;
  float fVar5;
  UnityEngine_Vector2_Fields UVar6;
  UnityEngine_Vector2_Fields UVar7;
  UnityEngine_Vector2_Fields UVar8;
  UnityEngine_Vector2_o UVar9;
  
  if ((DAT_04565cc9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    DAT_04565cc9 = 1;
  }
  if (*(char *)&(__this->fields).LNAPCDLIOOE == '\0') {
    UnityEngine_UI_ScrollRect__LateUpdate((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
    Nekki_SF2_GUI_SimpleScroll__ICHICAKKILG(__this,method_00);
    if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if (bVar1) {
      pUVar2 = (__this->fields).super.m_Content;
      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
        UVar9 = UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
        UVar7 = (__this->fields).IFDBJFNPOEK.fields;
        UVar8 = (__this->fields).AOLPGMKLBGK.fields;
        fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        UVar6.x = ((UVar9.fields.x - UVar7.x) - UVar8.x) / fVar5;
        UVar6.y = ((UVar9.fields.y - UVar7.y) - UVar8.y) / fVar5;
        (__this->fields).KFDLOCBGNEA.fields = UVar6;
        if (DAT_0455fa75 == '\0') {
          FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
          DAT_0455fa75 = '\x01';
        }
        pUVar2 = (__this->fields).super.m_Content;
        (__this->fields).AOLPGMKLBGK.fields =
             (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
        if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
          UVar9 = UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
          pSVar4 = (__this->fields).JFFDCLAAPBE;
          (__this->fields).IFDBJFNPOEK.fields.x = UVar9.fields.x;
          (__this->fields).IFDBJFNPOEK.fields.y = UVar9.fields.y;
          if (pSVar4 == (System_Action_o *)0x0) {
            return;
          }
          bVar1 = Nekki_SF2_GUI_SimpleScroll__IsMoving(__this,method_01);
          if ((!bVar1) && (*(char *)&(__this->fields).KIANNGNDAFC == '\0')) {
            return;
          }
          pSVar4 = (__this->fields).JFFDCLAAPBE;
          pNVar3 = Nekki_SF2_GUI_SimpleScroll__MOKNJIIEIMG(__this,method_02);
          if (pSVar4 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0312d21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(pSVar4->fields).super.super.invoke_impl)
                      ((pSVar4->fields).super.super.method_code,pNVar3,
                       (pSVar4->fields).super.super.method);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== public void RemoveItem(BaseScrollItem IKKAMAMLIKA, Transform IFFKONPAKOP)  [RVA 0x302D2F4]
// Nekki.SF2.GUI.SimpleScroll$$RemoveItem @ RVA 0x302D2F4

void Nekki_SF2_GUI_SimpleScroll__RemoveItem
               (Nekki_SF2_GUI_SimpleScroll_o *__this,Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,
               UnityEngine_Transform_o *IFFKONPAKOP,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_Transform_o *__this_01;
  
  if ((DAT_04565cca & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_Remove__);
    DAT_04565cca = 1;
  }
  __this_00 = *(System_Collections_Generic_List_object__o **)&(__this->fields)._snapEase;
  bVar1 = false;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    bVar1 = System_Collections_Generic_List<object>__Remove
                      (__this_00,(Il2CppObject *)IKKAMAMLIKA,
                       Method_System_Collections_Generic_List<BaseScrollItem>_Remove__);
    if ((IKKAMAMLIKA != (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) &&
       (__this_01 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)IKKAMAMLIKA,(MethodInfo *)0x0),
       bVar1 = false, __this_01 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent(__this_01,IFFKONPAKOP,false,(MethodInfo *)0x0);
      *(undefined1 *)((long)&(__this->fields).NMIHOKCDLMP + 2) = 1;
      *(undefined2 *)&(__this->fields).NMIHOKCDLMP = 2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(bVar1);
}


// ===== public void ScrollToOrth(float LDMFIPMKKBA, float PNEIGGOFIOA, Ease GAJONDLDKLI = 1)  [RVA 0x302A168]
// Nekki.SF2.GUI.SimpleScroll$$ScrollToOrth @ RVA 0x302A168

void Nekki_SF2_GUI_SimpleScroll__ScrollToOrth
               (Nekki_SF2_GUI_SimpleScroll_o *__this,float LDMFIPMKKBA,float PNEIGGOFIOA,
               int32_t GAJONDLDKLI,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  UnityEngine_RectTransform_o *pUVar4;
  Nekki_SF2_GUI_BaseScrollItem_o *pNVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Action_BaseScrollItem__o *pSVar6;
  Nekki_SF2_GUI_SimpleScroll_c *pNVar7;
  System_Action_o *pSVar8;
  UnityEngine_Vector2_Fields UVar9;
  UnityEngine_Vector2_o UVar10;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o local_38;
  
  if ((*(char *)&(__this->fields).LNAPCDLIOOE != '\0') ||
     (bVar3 = Nekki_SF2_GUI_SimpleScroll__CanInvokeScrolling
                        (__this,(MethodInfo *)(ulong)(uint)GAJONDLDKLI), !bVar3)) {
    return;
  }
  Nekki_SF2_GUI_SimpleScroll__ICHICAKKILG(__this,method_00);
  pUVar4 = (__this->fields).super.m_Content;
  if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
    UVar10 = UnityEngine_RectTransform__get_anchoredPosition(pUVar4,(MethodInfo *)0x0);
    local_38.fields.y = UVar10.fields.y;
    local_38.fields.x = UVar10.fields.x;
    if ((__this->fields).super.m_Vertical != false) {
      local_38.fields.y = LDMFIPMKKBA;
      Nekki_SF2_GUI_SimpleScroll__OLABKBMECLF(__this,&local_38,method);
    }
    if ((__this->fields).super.m_Horizontal != false) {
      local_38.fields.x = LDMFIPMKKBA;
      Nekki_SF2_GUI_SimpleScroll__HGDFKDAJKOB(__this,&local_38,method);
    }
    fVar2 = local_38.fields.y;
    fVar1 = local_38.fields.x;
    if (0.01 < PNEIGGOFIOA) {
      (*(__this->klass->vtable)._41_StopMovement.methodPtr)
                (__this,(__this->klass->vtable)._41_StopMovement.method);
      UVar10.fields.y = local_38.fields.y;
      UVar10.fields.x = local_38.fields.x;
      Nekki_SF2_GUI_SimpleScroll__MGGKMCMKAPB(__this,UVar10,PNEIGGOFIOA,1,method);
      return;
    }
    pUVar4 = (__this->fields).super.m_Content;
    if (DAT_04560001 == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_04560001 = '\x01';
    }
    if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
      UVar9 = (UnityEngine_Vector2_TypeInfo->static_fields->rightVector).fields;
      value.fields.x = fVar1 - UVar9.x;
      value.fields.y = fVar2 - UVar9.y;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar4,value,(MethodInfo *)0x0);
      UVar9.y = local_38.fields.y;
      UVar9.x = local_38.fields.x;
      pNVar7 = __this->klass;
      (__this->fields).IFDBJFNPOEK.fields = UVar9;
      (*(pNVar7->vtable)._41_StopMovement.methodPtr)
                (__this,(pNVar7->vtable)._41_StopMovement.method);
      pSVar8 = (__this->fields).JFFDCLAAPBE;
      if (pSVar8 != (System_Action_o *)0x0) {
        pNVar5 = Nekki_SF2_GUI_SimpleScroll__MOKNJIIEIMG(__this,method_01);
        (*(code *)(pSVar8->fields).super.super.invoke_impl)
                  ((pSVar8->fields).super.super.method_code,pNVar5,
                   (pSVar8->fields).super.super.method);
      }
      pSVar6 = (__this->fields).FOKMEOHPDJL;
      if (pSVar6 != (System_Action_BaseScrollItem__o *)0x0) {
        (*(code *)(pSVar6->fields).super.super.invoke_impl)
                  ((pSVar6->fields).super.super.method_code,(pSVar6->fields).super.super.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PPBANLLIGDK()  [RVA 0x302D564]
// Nekki.SF2.GUI.SimpleScroll$$PPBANLLIGDK @ RVA 0x302D564

void Nekki_SF2_GUI_SimpleScroll__PPBANLLIGDK
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  char cVar2;
  bool bVar3;
  UnityEngine_UI_LayoutGroup_o *pUVar4;
  Il2CppObject *message;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *extraout_x1_05;
  MethodInfo *method_01;
  MethodInfo *extraout_x1_06;
  MethodInfo *extraout_x1_07;
  MethodInfo *extraout_x1_08;
  MethodInfo *extraout_x1_09;
  MethodInfo *extraout_x1_10;
  MethodInfo *pMVar5;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_Vector2_o UVar7;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  UnityEngine_Vector2_o value_02;
  UnityEngine_Vector2_o value_03;
  
  if ((DAT_04565ccb & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_12141/*"SimpleScroll::Check: Configure layout anchor properly"*/);
    FUN_01bab630(&StringLiteral_12143/*"SimpleScroll::Check: content pivot must be: x=0.5"*/);
    FUN_01bab630(&StringLiteral_12142/*"SimpleScroll::Check: Unsupported both vertical and horizontal"*/);
    FUN_01bab630(&StringLiteral_12144/*"SimpleScroll::Check: content pivot must be: y=0.5; y=1"*/);
    DAT_04565ccb = 1;
    method = extraout_x1;
  }
  bVar1 = (__this->fields).super.m_Vertical;
  cVar2 = (__this->fields).super.m_Horizontal;
  if ((bVar1 != false) == ((bool_conflict)cVar2 != false)) {
    message = StringLiteral_12142/*"SimpleScroll::Check: Unsupported both vertical and horizontal"*/;
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      message = StringLiteral_12142/*"SimpleScroll::Check: Unsupported both vertical and horizontal"*/;
    }
LAB_0312d8a0:
    UnityEngine_Debug__LogError(message,(MethodInfo *)0x0);
    return;
  }
  if (bVar1 != false) {
    Nekki_SF2_GUI_SimpleScroll__get_IsYUp(__this,method);
    bVar3 = Nekki_SF2_GUI_SimpleScroll__get_IsYUp(__this,method_00);
    pMVar5 = extraout_x1_00;
    if (bVar3) {
      pUVar6 = (__this->fields).super.m_Content;
      if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312d8b0;
      UVar7 = UnityEngine_RectTransform__get_anchorMax(pUVar6,(MethodInfo *)0x0);
      UVar7.fields.y = 1.0;
      UnityEngine_RectTransform__set_anchorMax(pUVar6,UVar7,(MethodInfo *)0x0);
      pUVar6 = (__this->fields).super.m_Content;
      if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312d8b0;
      UVar7 = UnityEngine_RectTransform__get_anchorMin(pUVar6,(MethodInfo *)0x0);
      value.fields.x = UVar7.fields.x;
      value.fields.y = 1.0;
      UnityEngine_RectTransform__set_anchorMin(pUVar6,value,(MethodInfo *)0x0);
      pUVar6 = (__this->fields).super.m_Content;
      if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312d8b0;
      UnityEngine_RectTransform__set_pivot
                (pUVar6,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
      pUVar4 = *(UnityEngine_UI_LayoutGroup_o **)&(__this->fields).ANKHPKGAHCA;
      if (pUVar4 == (UnityEngine_UI_LayoutGroup_o *)0x0) goto LAB_0312d8b0;
      pMVar5 = extraout_x1_01;
      if (2 < (uint)(pUVar4->fields).m_ChildAlignment) {
        UnityEngine_UI_LayoutGroup__set_childAlignment(pUVar4,1,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogWarning(StringLiteral_12141/*"SimpleScroll::Check: Configure layout anchor properly"*/,(MethodInfo *)0x0);
        pMVar5 = extraout_x1_02;
      }
    }
    bVar3 = Nekki_SF2_GUI_SimpleScroll__get_IsYcenter(__this,pMVar5);
    pMVar5 = extraout_x1_03;
    if (bVar3) {
      pUVar6 = (__this->fields).super.m_Content;
      if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312d8b0;
      UVar7 = UnityEngine_RectTransform__get_anchorMax(pUVar6,(MethodInfo *)0x0);
      value_00.fields.x = UVar7.fields.x;
      value_00.fields.y = 0.5;
      UnityEngine_RectTransform__set_anchorMax(pUVar6,value_00,(MethodInfo *)0x0);
      pUVar6 = (__this->fields).super.m_Content;
      if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312d8b0;
      UVar7 = UnityEngine_RectTransform__get_anchorMin(pUVar6,(MethodInfo *)0x0);
      value_01.fields.x = UVar7.fields.x;
      value_01.fields.y = 0.5;
      UnityEngine_RectTransform__set_anchorMin(pUVar6,value_01,(MethodInfo *)0x0);
      pUVar6 = (__this->fields).super.m_Content;
      if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312d8b0;
      UnityEngine_RectTransform__set_pivot
                (pUVar6,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
      pUVar4 = *(UnityEngine_UI_LayoutGroup_o **)&(__this->fields).ANKHPKGAHCA;
      if (pUVar4 == (UnityEngine_UI_LayoutGroup_o *)0x0) goto LAB_0312d8b0;
      pMVar5 = extraout_x1_04;
      if (2 < (pUVar4->fields).m_ChildAlignment - 3U) {
        UnityEngine_UI_LayoutGroup__set_childAlignment(pUVar4,4,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogWarning(StringLiteral_12141/*"SimpleScroll::Check: Configure layout anchor properly"*/,(MethodInfo *)0x0);
        pMVar5 = extraout_x1_05;
      }
    }
    bVar3 = Nekki_SF2_GUI_SimpleScroll__get_IsYUp(__this,pMVar5);
    method = method_01;
    if ((!bVar3) &&
       (bVar3 = Nekki_SF2_GUI_SimpleScroll__get_IsYcenter(__this,method_01), method = extraout_x1_06
       , !bVar3)) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_12144/*"SimpleScroll::Check: content pivot must be: y=0.5; y=1"*/,(MethodInfo *)0x0);
      method = extraout_x1_07;
    }
    cVar2 = (__this->fields).super.m_Horizontal;
  }
  if (cVar2 != '\0') {
    bVar3 = Nekki_SF2_GUI_SimpleScroll__get_IsXcenter(__this,method);
    pMVar5 = extraout_x1_08;
    if (bVar3) {
      pUVar6 = (__this->fields).super.m_Content;
      if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) {
LAB_0312d8b0:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      UVar7 = UnityEngine_RectTransform__get_anchorMax(pUVar6,(MethodInfo *)0x0);
      value_02.fields.y = UVar7.fields.y;
      value_02.fields.x = 0.5;
      UnityEngine_RectTransform__set_anchorMax(pUVar6,value_02,(MethodInfo *)0x0);
      pUVar6 = (__this->fields).super.m_Content;
      if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312d8b0;
      UVar7 = UnityEngine_RectTransform__get_anchorMin(pUVar6,(MethodInfo *)0x0);
      value_03.fields.y = UVar7.fields.y;
      value_03.fields.x = 0.5;
      UnityEngine_RectTransform__set_anchorMin(pUVar6,value_03,(MethodInfo *)0x0);
      pUVar6 = (__this->fields).super.m_Content;
      if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312d8b0;
      UnityEngine_RectTransform__set_pivot
                (pUVar6,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
      pUVar4 = *(UnityEngine_UI_LayoutGroup_o **)&(__this->fields).ANKHPKGAHCA;
      if (pUVar4 == (UnityEngine_UI_LayoutGroup_o *)0x0) goto LAB_0312d8b0;
      pMVar5 = extraout_x1_09;
      if ((pUVar4->fields).m_ChildAlignment != 4) {
        UnityEngine_UI_LayoutGroup__set_childAlignment(pUVar4,4,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogWarning(StringLiteral_12141/*"SimpleScroll::Check: Configure layout anchor properly"*/,(MethodInfo *)0x0);
        pMVar5 = extraout_x1_10;
      }
    }
    bVar3 = Nekki_SF2_GUI_SimpleScroll__get_IsXcenter(__this,pMVar5);
    if (!bVar3) {
      message = StringLiteral_12143/*"SimpleScroll::Check: content pivot must be: x=0.5"*/;
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        message = StringLiteral_12143/*"SimpleScroll::Check: content pivot must be: x=0.5"*/;
      }
      goto LAB_0312d8a0;
    }
  }
  return;
}


// ===== private void LILEFCCDGNB()  [RVA 0x302D8B4]
// Nekki.SF2.GUI.SimpleScroll$$LILEFCCDGNB @ RVA 0x302D8B4

void Nekki_SF2_GUI_SimpleScroll__LILEFCCDGNB
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  
  Nekki_SF2_GUI_SimpleScroll__CCPABLFBFFA(__this,method);
  __this_00 = (__this->fields).super.m_Content;
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
  }
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchoredPosition
              (__this_00,
               (UnityEngine_Vector2_o)
               (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields,(MethodInfo *)0x0);
    if (DAT_0455fa75 == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa75 = '\x01';
    }
    (__this->fields).super.m_ContentStartPosition.fields =
         (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
    UnityEngine_UI_ScrollRect__UpdatePrevData
              ((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
    *(undefined1 *)((long)&(__this->fields).NMIHOKCDLMP + 3) = 0;
    if (DAT_0455fa75 == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa75 = '\x01';
    }
    (__this->fields).IFDBJFNPOEK.fields =
         (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
    UnityEngine_UI_ScrollRect__UpdateBounds((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PBDJKOPCAOK(Vector2 MJBMLNKAPGC)  [RVA 0x302B8C4]
// Nekki.SF2.GUI.SimpleScroll$$PBDJKOPCAOK @ RVA 0x302B8C4

void Nekki_SF2_GUI_SimpleScroll__PBDJKOPCAOK
               (Nekki_SF2_GUI_SimpleScroll_o *__this,UnityEngine_Vector2_o MJBMLNKAPGC,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Vector2_Fields UVar2;
  UnityEngine_Vector2_Fields UVar3;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Vector2_o value;
  
  pUVar1 = (__this->fields).super.m_Content;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    UVar4 = UnityEngine_RectTransform__get_anchoredPosition(pUVar1,(MethodInfo *)0x0);
    value.fields.x = MJBMLNKAPGC.fields.x + UVar4.fields.x;
    value.fields.y = MJBMLNKAPGC.fields.y + UVar4.fields.y;
    UnityEngine_RectTransform__set_anchoredPosition(pUVar1,value,(MethodInfo *)0x0);
    UVar2 = (__this->fields).super.m_ContentStartPosition.fields;
    UVar3.x = MJBMLNKAPGC.fields.x + UVar2.x;
    UVar3.y = MJBMLNKAPGC.fields.y + UVar2.y;
    (__this->fields).super.m_ContentStartPosition.fields = UVar3;
    UnityEngine_UI_ScrollRect__UpdatePrevData
              ((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).super.m_Content;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar4 = UnityEngine_RectTransform__get_anchoredPosition(pUVar1,(MethodInfo *)0x0);
      (__this->fields).IFDBJFNPOEK.fields.x = UVar4.fields.x;
      (__this->fields).IFDBJFNPOEK.fields.y = UVar4.fields.y;
      UnityEngine_UI_ScrollRect__UpdateBounds
                ((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool MEIKBHLKJJK(RectTransform PLDLIICJOEC, bool EDPALOCNMAC)  [RVA 0x302B740]
// Nekki.SF2.GUI.SimpleScroll$$MEIKBHLKJJK @ RVA 0x302B740

bool Nekki_SF2_GUI_SimpleScroll__MEIKBHLKJJK
               (Nekki_SF2_GUI_SimpleScroll_o *__this,UnityEngine_RectTransform_o *PLDLIICJOEC,
               bool EDPALOCNMAC,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  UnityEngine_Vector3_array *verts4;
  float fVar3;
  float fVar4;
  UnityEngine_Rect_o UVar5;
  UnityEngine_Rect_o UVar6;
  
  if ((DAT_04565ccc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Vector3___TypeInfo);
    DAT_04565ccc = 1;
  }
  verts4 = (UnityEngine_Vector3_array *)FUN_01bab718(UnityEngine_Vector3___TypeInfo,4);
  UVar5 = UnityEngine_TransformExtensions__GetWorldRect
                    ((__this->fields).super.m_Viewport,verts4,(MethodInfo *)0x0);
  UVar6 = UnityEngine_TransformExtensions__GetWorldRect(PLDLIICJOEC,verts4,(MethodInfo *)0x0);
  fVar3 = UVar6.fields.m_YMin;
  fVar4 = UVar6.fields.m_XMin;
  if ((__this->fields).super.m_Vertical == false) {
    if ((__this->fields).super.m_Horizontal == false) {
      return false;
    }
    if (EDPALOCNMAC) {
      fVar3 = UVar5.fields.m_XMin + -1.0;
      bVar2 = NAN(fVar4) || NAN(fVar3);
      bVar1 = fVar4 < fVar3;
      goto LAB_0312b80c;
    }
    fVar3 = UVar6.fields.m_Width + fVar4;
    fVar4 = UVar5.fields.m_Width + UVar5.fields.m_XMin;
  }
  else {
    if (!EDPALOCNMAC) {
      fVar4 = UVar5.fields.m_YMin + -1.0;
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar3) && !NAN(fVar4)) {
        bVar1 = fVar3 < fVar4;
        bVar2 = false;
      }
LAB_0312b80c:
      return bVar1 == bVar2;
    }
    fVar3 = UVar6.fields.m_Height + fVar3;
    fVar4 = UVar5.fields.m_Height + UVar5.fields.m_YMin;
  }
  return fVar3 <= fVar4 + 1.0;
}


// ===== private void EAOENMJKCPJ()  [RVA 0x302BD38]
// Nekki.SF2.GUI.SimpleScroll$$EAOENMJKCPJ @ RVA 0x302BD38

void Nekki_SF2_GUI_SimpleScroll__EAOENMJKCPJ
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  *(undefined1 *)((long)&(__this->fields).NMIHOKCDLMP + 3) = 1;
  return;
}


// ===== public override void OnDrag(PointerEventData OHNNFPGGEFK)  [RVA 0x302D994]
// Nekki.SF2.GUI.SimpleScroll$$OnDrag @ RVA 0x302D994

void Nekki_SF2_GUI_SimpleScroll__OnDrag
               (Nekki_SF2_GUI_SimpleScroll_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_EventSystems_PointerEventData_o *extraout_x1;
  UnityEngine_EventSystems_PointerEventData_o *method_00;
  MethodInfo *method_01;
  
  method_00 = OHNNFPGGEFK;
  if ((DAT_04565ccd & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
    DAT_04565ccd = 1;
    method_00 = extraout_x1;
  }
  if (*(char *)&(__this->fields).LNAPCDLIOOE == '\0') {
    Nekki_SF2_GUI_SimpleScroll__CCPABLFBFFA(__this,(MethodInfo *)method_00);
    *(undefined1 *)&(__this->fields).KIANNGNDAFC = 1;
    *(undefined8 *)&(__this->fields).IHIEPGHGHKH = 0;
    Nekki_SF2_GUI_SimpleScroll__ICHICAKKILG(__this,method_01);
    bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                      (*(System_Collections_Generic_List_T__o **)&(__this->fields)._snapEase,
                       Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
    if (!bVar1) {
      UnityEngine_UI_ScrollRect__OnDrag
                ((UnityEngine_UI_ScrollRect_o *)__this,OHNNFPGGEFK,(MethodInfo *)0x0);
    }
    *(undefined2 *)&(__this->fields).NMIHOKCDLMP = 2;
  }
  return;
}


// ===== private void ODFDNFGEDDK()  [RVA 0x302DA24]
// Nekki.SF2.GUI.SimpleScroll$$ODFDNFGEDDK @ RVA 0x302DA24

void Nekki_SF2_GUI_SimpleScroll__ODFDNFGEDDK
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_o *pUVar1;
  bool bVar2;
  UnityEngine_Vector2_Fields UVar3;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *pIVar4;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_Object_o *__this_03;
  MethodInfo *method_00;
  bool bVar5;
  UnityEngine_RectTransform_o *__this_04;
  ulong uVar6;
  UnityEngine_Rect_o UVar7;
  
  if ((DAT_04565cce & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform___TypeInfo);
    FUN_01bab630(&StringLiteral_15951/*"_DAMPER_"*/);
    DAT_04565cce = 1;
  }
  if (((*(char *)((long)&(__this->fields)._visibilityChecker + 1) == '\0') &&
      (*(char *)&(__this->fields)._visibilityChecker == '\0')) ||
     ((__this->fields).GNMNFMOHDMG.fields != (UnityEngine_Vector2_Fields)0x0)) {
    return;
  }
  pUVar1 = &(__this->fields).GNMNFMOHDMG;
  UVar3 = (UnityEngine_Vector2_Fields)FUN_01bab718(UnityEngine_RectTransform___TypeInfo,2);
  (__this->fields).GNMNFMOHDMG.fields = UVar3;
  thunk_FUN_01c20e04(pUVar1,UVar3);
  uVar6 = 0;
  bVar5 = true;
  do {
    UVar3 = pUVar1->fields;
    __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(__this_00,(MethodInfo *)0x0);
    if ((__this_00 == (UnityEngine_GameObject_o *)0x0) ||
       (pIVar4 = UnityEngine_GameObject__AddComponent<object>
                           (__this_00,Method_UnityEngine_GameObject_AddComponent<RectTransform>__),
       UVar3 == (UnityEngine_Vector2_Fields)0x0)) goto LAB_0312dc0c;
    if (*(uint *)((long)UVar3 + 0x18) <= uVar6) {
LAB_0312dc10:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    *(Il2CppObject **)((long)UVar3 + uVar6 * 8 + 0x20) = pIVar4;
    thunk_FUN_01c20e04();
    UVar3 = pUVar1->fields;
    if (UVar3 == (UnityEngine_Vector2_Fields)0x0) goto LAB_0312dc0c;
    if (*(uint *)((long)UVar3 + 0x18) <= uVar6) goto LAB_0312dc10;
    __this_01 = *(UnityEngine_Transform_o **)((long)UVar3 + uVar6 * 8 + 0x20);
    if (__this_01 == (UnityEngine_Transform_o *)0x0) {
LAB_0312dc0c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_Transform__SetParent
              (__this_01,(UnityEngine_Transform_o *)(__this->fields).super.m_Content,false,
               (MethodInfo *)0x0);
    UVar3 = (__this->fields).GNMNFMOHDMG.fields;
    if (UVar3 == (UnityEngine_Vector2_Fields)0x0) goto LAB_0312dc0c;
    if (*(uint *)((long)UVar3 + 0x18) <= uVar6) goto LAB_0312dc10;
    __this_02 = (__this->fields).super.m_Viewport;
    if (__this_02 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312dc0c;
    __this_04 = *(UnityEngine_RectTransform_o **)((long)UVar3 + uVar6 * 8 + 0x20);
    UVar7 = UnityEngine_RectTransform__get_rect(__this_02,(MethodInfo *)0x0);
    if (__this_04 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312dc0c;
    UnityEngine_RectTransform__set_sizeDelta
              (__this_04,(UnityEngine_Vector2_o)UVar7.fields._8_8_,(MethodInfo *)0x0);
    UVar3 = pUVar1->fields;
    if (UVar3 == (UnityEngine_Vector2_Fields)0x0) goto LAB_0312dc0c;
    if (*(uint *)((long)UVar3 + 0x18) <= uVar6) goto LAB_0312dc10;
    __this_03 = *(UnityEngine_Object_o **)((long)UVar3 + uVar6 * 8 + 0x20);
    if (__this_03 == (UnityEngine_Object_o *)0x0) goto LAB_0312dc0c;
    UnityEngine_Object__set_name(__this_03,StringLiteral_15951/*"_DAMPER_"*/,(MethodInfo *)0x0);
    uVar6 = 1;
    bVar2 = !bVar5;
    bVar5 = false;
    if (bVar2) {
      Nekki_SF2_GUI_SimpleScroll__POHJDOKIPBD(__this,method_00);
      return;
    }
  } while( true );
}


// ===== private void POHJDOKIPBD()  [RVA 0x302C6CC]
// Nekki.SF2.GUI.SimpleScroll$$POHJDOKIPBD @ RVA 0x302C6CC

void Nekki_SF2_GUI_SimpleScroll__POHJDOKIPBD
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  
  UVar1 = (__this->fields).GNMNFMOHDMG.fields;
  if ((UVar1 == (UnityEngine_Vector2_Fields)0x0) || (*(int *)((long)UVar1 + 0x18) != 2)) {
    return;
  }
                    /* try { // try from 0312c6e8 to 0322c6eb has its CatchHandler @ 0312c758 */
                    /* try { // try from 0312c6ec to 0322c6f7 has its CatchHandler @ 0312c75c */
  if (*(UnityEngine_Transform_o **)((long)UVar1 + 0x20) != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__SetAsFirstSibling
              (*(UnityEngine_Transform_o **)((long)UVar1 + 0x20),(MethodInfo *)0x0);
                    /* try { // try from 0312c6f8 to 0322c773 has its CatchHandler @ 0312c6a0 */
    UVar1 = (__this->fields).GNMNFMOHDMG.fields;
    if (UVar1 != (UnityEngine_Vector2_Fields)0x0) {
      if (*(uint *)((long)UVar1 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      if (*(UnityEngine_Transform_o **)((long)UVar1 + 0x28) != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetAsLastSibling
                  (*(UnityEngine_Transform_o **)((long)UVar1 + 0x28),(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void StopMovement()  [RVA 0x302DC14]
// Nekki.SF2.GUI.SimpleScroll$$StopMovement @ RVA 0x302DC14

void Nekki_SF2_GUI_SimpleScroll__StopMovement
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll__CCPABLFBFFA(__this,method);
  UnityEngine_UI_ScrollRect__StopMovement((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private Vector2 JJOCMJBGOKG(RectTransform IKKAMAMLIKA)  [RVA 0x302DC30]
// Nekki.SF2.GUI.SimpleScroll$$JJOCMJBGOKG @ RVA 0x302DC30

UnityEngine_Vector2_o
Nekki_SF2_GUI_SimpleScroll__JJOCMJBGOKG
          (Nekki_SF2_GUI_SimpleScroll_o *__this,UnityEngine_RectTransform_o *IKKAMAMLIKA,
          MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  bool bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *pMVar4;
  UnityEngine_Vector2_Fields UVar5;
  UnityEngine_Vector2_o UVar6;
  UnityEngine_Vector2_o UVar7;
  
  pMVar4 = (MethodInfo *)IKKAMAMLIKA;
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
    pMVar4 = extraout_x1;
  }
  UVar5 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
  if ((__this->fields).super.m_Vertical != false) {
    bVar2 = Nekki_SF2_GUI_SimpleScroll__get_IsYUp(__this,pMVar4);
    pMVar4 = extraout_x1_00;
    if (bVar2) {
      if (IKKAMAMLIKA == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312dd54;
      UVar5 = (UnityEngine_Vector2_Fields)
              UnityEngine_RectTransform__get_anchoredPosition(IKKAMAMLIKA,(MethodInfo *)0x0);
      pMVar4 = extraout_x1_01;
    }
    bVar2 = Nekki_SF2_GUI_SimpleScroll__get_IsYcenter(__this,pMVar4);
    pMVar4 = extraout_x1_02;
    if (bVar2) {
      if (IKKAMAMLIKA == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312dd54;
      UVar6 = UnityEngine_RectTransform__get_anchoredPosition(IKKAMAMLIKA,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).super.m_Content;
      if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312dd54;
      UVar7 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
      UVar5.y = UVar6.fields.y + UVar7.fields.y * 0.5;
      UVar5.x = UVar6.fields.x + UVar7.fields.x * 0.5;
      pMVar4 = extraout_x1_03;
    }
  }
  if (((__this->fields).super.m_Horizontal == false) ||
     (bVar2 = Nekki_SF2_GUI_SimpleScroll__get_IsXcenter(__this,pMVar4), !bVar2)) {
    return (UnityEngine_Vector2_o)UVar5;
  }
  if (IKKAMAMLIKA != (UnityEngine_RectTransform_o *)0x0) {
    UVar6 = UnityEngine_RectTransform__get_anchoredPosition(IKKAMAMLIKA,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).super.m_Content;
    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
      UVar7 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
      UVar1.y = UVar6.fields.y - UVar7.fields.y * 0.5;
      UVar1.x = UVar6.fields.x - UVar7.fields.x * 0.5;
      return (UnityEngine_Vector2_o)UVar1;
    }
  }
LAB_0312dd54:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private Vector2 CIPFHAIEHPM()  [RVA 0x302C7C0]
// Nekki.SF2.GUI.SimpleScroll$$CIPFHAIEHPM @ RVA 0x302C7C0

UnityEngine_Vector2_o
Nekki_SF2_GUI_SimpleScroll__CIPFHAIEHPM(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  UnityEngine_Vector2_c *pUVar4;
  bool bVar5;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_RectTransform_o *pUVar6;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  UnityEngine_Vector2_Fields UVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  undefined8 in_d1;
  float fVar12;
  float fVar13;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o UVar14;
  UnityEngine_Rect_o UVar15;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04565ccf & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
                    /* try { // try from 0312c7f4 to 0322c803 has its CatchHandler @ 0312c804 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
                    /* catch() { ... } // from try @ 0312c774 with catch @ 0312c804
                       catch() { ... } // from try @ 0312c7f4 with catch @ 0312c804 */
                    /* try { // try from 0312c808 to 0322c80b has its CatchHandler @ 0312c814 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__);
                    /* try { // try from 0312c80c to 0322c817 has its CatchHandler @ 0312c6a0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0312c808 with catch @ 0312c814
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    DAT_04565ccf = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo,method);
    DAT_0455fa75 = '\x01';
  }
  *(UnityEngine_Vector2_Fields *)&(__this->fields).GCNFFAAPOKE =
       (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
  bVar5 = DJNBJHPDKDP__OBECCOPBADO<object>
                    (*(System_Collections_Generic_List_T__o **)&(__this->fields)._snapEase,
                     Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
  }
  fVar13 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.x;
  fVar12 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.y;
  if (bVar5) goto LAB_0312ca78;
  __this_00 = *(System_Collections_Generic_List_object__o **)&(__this->fields)._snapEase;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,__this_00,
               Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while (bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_70,
                              Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__
                             ), bVar5) {
      if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      fVar11 = (float)(*(local_70.fields._current)->klass->vtable[0x33].methodPtr)
                                (local_70.fields._current,
                                 (local_70.fields._current)->klass->vtable[0x33].method);
      fVar13 = fVar13 + fVar11;
      fVar12 = fVar12 + (float)in_d1;
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__
              );
    UVar7 = (__this->fields).GNMNFMOHDMG.fields;
    if (UVar7 == (UnityEngine_Vector2_Fields)0x0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)((long)UVar7 + 0x18);
    }
    lVar8 = *(long *)&(__this->fields)._snapEase;
    if (lVar8 != 0) {
      iVar1 = *(int *)(lVar8 + 0x18);
      if (DAT_0455fa7e == '\0') {
        FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
        DAT_0455fa7e = '\x01';
      }
      pUVar4 = UnityEngine_Vector2_TypeInfo;
      lVar8 = *(long *)&(__this->fields).ANKHPKGAHCA;
      if (lVar8 != 0) {
        fVar11 = (float)(iVar1 + -1);
                    /* try { // try from 0312c9a0 to 0322c9e7 has its CatchHandler @ 0312c9a0
                       catch() { ... } // from try @ 0312c9a0 with catch @ 0312c9a0
                       catch() { ... } // from try @ 0312c9f8 with catch @ 0312c9a0
                       catch() { ... } // from try @ 0312ca8c with catch @ 0312c9a0
                       catch() { ... } // from try @ 0312cb0c with catch @ 0312c9a0 */
        fVar13 = fVar13 + (UnityEngine_Vector2_TypeInfo->static_fields->oneVector).fields.x * fVar11
                          * *(float *)(lVar8 + 0x60);
        fVar12 = fVar12 + (UnityEngine_Vector2_TypeInfo->static_fields->oneVector).fields.y * fVar11
                          * *(float *)(lVar8 + 0x60);
        *(float *)&(__this->fields).GCNFFAAPOKE = fVar13;
        *(float *)&(__this->fields).field_0x1a4 = fVar12;
        fVar13 = fVar13 + (pUVar4->static_fields->oneVector).fields.x * (float)iVar9 *
                          *(float *)(lVar8 + 0x60);
        fVar12 = fVar12 + (pUVar4->static_fields->oneVector).fields.y * (float)iVar9 *
                          *(float *)(lVar8 + 0x60);
        if (iVar9 != 2) {
LAB_0312ca78:
          UVar14.fields.y = fVar12;
          UVar14.fields.x = fVar13;
                    /* try { // try from 0312ca8c to 0322caf3 has its CatchHandler @ 0312c9a0 */
          return (UnityEngine_Vector2_o)UVar14.fields;
        }
                    /* try { // try from 0312c9e8 to 0322c9eb has its CatchHandler @ 0312ca58 */
        pUVar6 = (__this->fields).super.m_Viewport;
                    /* try { // try from 0312c9ec to 0322c9f7 has its CatchHandler @ 0312ca5c */
        if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
          UVar15 = UnityEngine_RectTransform__get_rect(pUVar6,(MethodInfo *)0x0);
                    /* try { // try from 0312c9f8 to 0322ca73 has its CatchHandler @ 0312c9a0 */
          UVar7 = (__this->fields).GNMNFMOHDMG.fields;
          fVar11 = UVar15.fields.m_Width;
          if ((__this->fields).super.m_Horizontal != false) {
            fVar11 = UVar15.fields.m_Width * 4.0;
          }
          fVar3 = UVar15.fields.m_Height;
          if ((__this->fields).super.m_Vertical != false) {
            fVar3 = UVar15.fields.m_Height * 4.0;
          }
          if (UVar7 != (UnityEngine_Vector2_Fields)0x0) {
            uVar2 = *(uint *)((long)UVar7 + 0x18);
            method_00 = extraout_x1_00;
            if (0 < (int)uVar2) {
              uVar10 = 0;
              do {
                if (uVar2 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8d0();
                }
                pUVar6 = *(UnityEngine_RectTransform_o **)
                          ((long)UVar7 + (long)(int)uVar10 * 8 + 0x20);
                if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312caa0;
                value.fields.y = fVar3;
                value.fields.x = fVar11;
                UnityEngine_RectTransform__set_sizeDelta(pUVar6,value,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0312c9e8 with catch @ 0312ca58
                        */
                uVar2 = *(uint *)((long)UVar7 + 0x18);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0312c9ec with catch @ 0312ca5c
                        */
                uVar10 = uVar10 + 1;
                fVar13 = fVar11 + fVar13;
                fVar12 = fVar3 + fVar12;
                method_00 = extraout_x1_01;
              } while ((int)uVar10 < (int)uVar2);
            }
                    /* try { // try from 0312ca74 to 0322ca8b has its CatchHandler @ 0312cb04 */
            Nekki_SF2_GUI_SimpleScroll__POHJDOKIPBD(__this,method_00);
            goto LAB_0312ca78;
          }
        }
      }
    }
  }
LAB_0312caa0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x302DD58]
// Nekki.SF2.GUI.SimpleScroll$$.ctor @ RVA 0x302DD58

void Nekki_SF2_GUI_SimpleScroll___ctor(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_c *pUVar1;
  System_Action_o **ppSVar2;
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_o *pSVar3;
  UnityEngine_Vector2_Fields UVar4;
  
  if ((DAT_04565cd0 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<BaseScrollItem>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SimpleScroll_<>c_ALGCEDPILIM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SimpleScroll_<>c_FDKDFIANANH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SimpleScroll_<>c_KPLPIALLCMI__);
    FUN_01bab630(&Nekki_SF2_GUI_SimpleScroll_<>c_TypeInfo);
    DAT_04565cd0 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_SimpleScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_SimpleScroll_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar3 = Nekki_SF2_GUI_SimpleScroll_<>c_TypeInfo->static_fields->__9__139_0;
  if (pSVar3 == (System_Action_o *)0x0) {
    if ((Nekki_SF2_GUI_SimpleScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_SimpleScroll_<>c_TypeInfo,method);
    }
    pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar2 = &Nekki_SF2_GUI_SimpleScroll_<>c_TypeInfo->static_fields->__9__139_0;
    *ppSVar2 = pSVar3;
    thunk_FUN_01c20e04(ppSVar2,pSVar3);
  }
  if (__this != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    (__this->fields).FOKMEOHPDJL = (System_Action_BaseScrollItem__o *)pSVar3;
    thunk_FUN_01c20e04(&(__this->fields).FOKMEOHPDJL,pSVar3);
    if ((Nekki_SF2_GUI_SimpleScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = Nekki_SF2_GUI_SimpleScroll_<>c_TypeInfo->static_fields->__9__139_1;
    if (pSVar3 == (System_Action_o *)0x0) {
      if ((Nekki_SF2_GUI_SimpleScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      ppSVar2 = &Nekki_SF2_GUI_SimpleScroll_<>c_TypeInfo->static_fields->__9__139_1;
      *ppSVar2 = pSVar3;
      thunk_FUN_01c20e04(ppSVar2,pSVar3);
    }
    (__this->fields).FOOOBJNPNEH = pSVar3;
    thunk_FUN_01c20e04(&(__this->fields).FOOOBJNPNEH,pSVar3);
    if ((Nekki_SF2_GUI_SimpleScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = Nekki_SF2_GUI_SimpleScroll_<>c_TypeInfo->static_fields->__9__139_2;
    if (pSVar3 == (System_Action_o *)0x0) {
      if ((Nekki_SF2_GUI_SimpleScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      ppSVar2 = &Nekki_SF2_GUI_SimpleScroll_<>c_TypeInfo->static_fields->__9__139_2;
      *ppSVar2 = pSVar3;
      thunk_FUN_01c20e04(ppSVar2,pSVar3);
    }
    (__this->fields).Items = (System_Collections_Generic_List_BaseScrollItem__o *)pSVar3;
    thunk_FUN_01c20e04(&(__this->fields).Items,pSVar3);
    __this_00 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<BaseScrollItem>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this_00,Method_System_Collections_Generic_List<BaseScrollItem>__ctor__);
    *(System_Collections_Generic_List_object__o **)&(__this->fields)._snapEase = __this_00;
    thunk_FUN_01c20e04(&(__this->fields)._snapEase,__this_00);
    (__this->fields)._snap = true;
    (__this->fields)._looped = false;
    *(undefined6 *)&(__this->fields).field_0x14a = 0x3e99999a0000;
    if (DAT_0455fa75 == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa75 = '\x01';
    }
    pUVar1 = UnityEngine_Vector2_TypeInfo;
    (__this->fields).KFDLOCBGNEA.fields =
         (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
    (__this->fields).IFDBJFNPOEK.fields = (pUVar1->static_fields->zeroVector).fields;
    UVar4 = (pUVar1->static_fields->zeroVector).fields;
    *(undefined8 *)&(__this->fields).IHIEPGHGHKH = 0x7fffffff;
    (__this->fields).AOLPGMKLBGK.fields = UVar4;
    UnityEngine_UI_ScrollRect___ctor((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PMAAPFAKLNJ()  [RVA 0x302E034]
// Nekki.SF2.GUI.SimpleScroll$$PMAAPFAKLNJ @ RVA 0x302E034

void Nekki_SF2_GUI_SimpleScroll__PMAAPFAKLNJ
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  UnityEngine_Transform_o *x;
  System_Collections_Generic_List_object__o *pSVar3;
  UnityEngine_Vector3_array *verts4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_BaseScrollItem_c *pNVar4;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *x_00;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_Vector2_o UVar6;
  UnityEngine_Vector2_o UVar7;
  UnityEngine_Rect_o r2;
  UnityEngine_Vector2_o GONFCLMJCFJ;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04565cd1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Vector3___TypeInfo);
    DAT_04565cd1 = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  bVar2 = Nekki_SF2_GUI_SimpleScroll__IsContentBiggerThanView(__this,method);
  if (bVar2) {
    x_00 = (__this->fields).MOKFCILEKDG;
    pUVar5 = (__this->fields).super.m_Viewport;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)pUVar5,(MethodInfo *)0x0
                      );
    if (bVar2) {
      pUVar5 = (__this->fields).super.m_Content;
      if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312e37c;
      x = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pUVar5,(MethodInfo *)0x0);
      pUVar5 = (__this->fields).super.m_Viewport;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      method_01 = (MethodInfo *)0x0;
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)pUVar5,(MethodInfo *)0x0)
      ;
      if (bVar2) {
        UVar6 = Nekki_SF2_GUI_SimpleScroll__DJPCFEGDNJN(__this,method_00);
        pSVar3 = *(System_Collections_Generic_List_object__o **)&(__this->fields)._snapEase;
        if (pSVar3 != (System_Collections_Generic_List_object__o *)0x0) {
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_88,pSVar3,
                     Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
          local_70.fields._index = local_88.fields._index;
          local_70.fields._version = local_88.fields._version;
          local_70.fields._list = local_88.fields._list;
          local_70.fields._current = local_88.fields._current;
          while( true ) {
            bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (&local_70,
                               Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__
                              );
            pIVar1 = local_70.fields._current;
            if (!bVar2) break;
            if ((Nekki_SF2_GUI_BaseScrollItem_o *)local_70.fields._current ==
                (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pUVar5 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform
                               ((Nekki_SF2_GUI_BaseScrollItem_o *)local_70.fields._current,
                                (MethodInfo *)0x0);
            UVar7 = Nekki_SF2_GUI_SimpleScroll__NEMAMJHLMKI(__this,pUVar5,method_01);
            UVar7.fields.y = (float)((ulong)UVar7.fields >> 0x20);
            GONFCLMJCFJ.fields.x = UVar6.fields.x;
            GONFCLMJCFJ.fields.y = (float)((ulong)UVar6.fields >> 0x20);
            bVar2 = Util__DDGOAPOKLHP(UVar7,GONFCLMJCFJ,(MethodInfo *)0x0);
            pNVar4 = (Nekki_SF2_GUI_BaseScrollItem_c *)pIVar1->klass;
            method_01 = (pNVar4->vtable)._47_EnableVisibility.method;
            (*(pNVar4->vtable)._47_EnableVisibility.methodPtr)(pIVar1,(ulong)bVar2);
          }
          goto LAB_0312e350;
        }
        goto LAB_0312e37c;
      }
    }
    verts4 = (UnityEngine_Vector3_array *)FUN_01bab718(UnityEngine_Vector3___TypeInfo,4);
    r2 = UnityEngine_TransformExtensions__GetWorldRect
                   ((UnityEngine_RectTransform_o *)(__this->fields).MOKFCILEKDG,verts4,
                    (MethodInfo *)0x0);
    pSVar3 = *(System_Collections_Generic_List_object__o **)&(__this->fields)._snapEase;
    if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) {
LAB_0312e37c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,pSVar3,
               Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__
                        );
      pIVar1 = local_70.fields._current;
      if (!bVar2) break;
      if ((Nekki_SF2_GUI_BaseScrollItem_o *)local_70.fields._current ==
          (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pUVar5 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform
                         ((Nekki_SF2_GUI_BaseScrollItem_o *)local_70.fields._current,
                          (MethodInfo *)0x0);
      bVar2 = UnityEngine_TransformExtensions__IsIntersects(pUVar5,r2,verts4,(MethodInfo *)0x0);
      pNVar4 = (Nekki_SF2_GUI_BaseScrollItem_c *)pIVar1->klass;
      (*(pNVar4->vtable)._47_EnableVisibility.methodPtr)
                (pIVar1,(ulong)bVar2,(pNVar4->vtable)._47_EnableVisibility.method);
    }
  }
  else {
    pSVar3 = *(System_Collections_Generic_List_object__o **)&(__this->fields)._snapEase;
    if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0312e37c;
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,pSVar3,
               Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_70,
                              Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__
                             ), bVar2) {
      if ((Nekki_SF2_GUI_BaseScrollItem_o *)local_70.fields._current ==
          (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (*(((Nekki_SF2_GUI_BaseScrollItem_c *)(local_70.fields._current)->klass)->vtable).
        _47_EnableVisibility.methodPtr)
                (local_70.fields._current,1,
                 (((Nekki_SF2_GUI_BaseScrollItem_c *)(local_70.fields._current)->klass)->vtable).
                 _47_EnableVisibility.method);
    }
  }
LAB_0312e350:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_70,Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
  return;
}


// ===== private bool ODFPBOOHGJE()  [RVA 0x302B6D0]
// Nekki.SF2.GUI.SimpleScroll$$ODFPBOOHGJE @ RVA 0x302B6D0

bool Nekki_SF2_GUI_SimpleScroll__ODFPBOOHGJE
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  if ((__this->fields).super.m_Vertical != false) {
    return 0.0 < (__this->fields).KFDLOCBGNEA.fields.y;
  }
  if ((__this->fields).super.m_Horizontal != false) {
    return (__this->fields).KFDLOCBGNEA.fields.x < 0.0;
  }
  return false;
}


// ===== public void TeleportContentToPos(float EMPKHNEPHPO)  [RVA 0x302E474]
// Nekki.SF2.GUI.SimpleScroll$$TeleportContentToPos @ RVA 0x302E474

void Nekki_SF2_GUI_SimpleScroll__TeleportContentToPos
               (Nekki_SF2_GUI_SimpleScroll_o *__this,float EMPKHNEPHPO,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_x2;
  UnityEngine_Vector2_Fields UVar2;
  UnityEngine_Vector2_Fields local_18;
  
  Nekki_SF2_GUI_SimpleScroll__CCPABLFBFFA(__this,method);
  Nekki_SF2_GUI_SimpleScroll__GHENENOBNFE(__this,method_00);
  Nekki_SF2_GUI_SimpleScroll__PMAAPFAKLNJ(__this,method_01);
  pUVar1 = (__this->fields).super.m_Content;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    local_18 = (UnityEngine_Vector2_Fields)
               UnityEngine_RectTransform__get_anchoredPosition(pUVar1,(MethodInfo *)0x0);
    if ((__this->fields).super.m_Vertical != false) {
      local_18.y = EMPKHNEPHPO;
      Nekki_SF2_GUI_SimpleScroll__OLABKBMECLF(__this,(UnityEngine_Vector2_o *)&local_18,in_x2);
    }
    if ((__this->fields).super.m_Horizontal != false) {
      local_18.x = EMPKHNEPHPO;
      Nekki_SF2_GUI_SimpleScroll__HGDFKDAJKOB(__this,(UnityEngine_Vector2_o *)&local_18,in_x2);
    }
    pUVar1 = (__this->fields).super.m_Content;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_anchoredPosition
                (pUVar1,(UnityEngine_Vector2_o)local_18,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).super.m_Content;
      if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
        UVar2 = (UnityEngine_Vector2_Fields)
                UnityEngine_RectTransform__get_anchoredPosition(pUVar1,(MethodInfo *)0x0);
        (__this->fields).super.m_ContentStartPosition.fields = UVar2;
        UnityEngine_UI_ScrollRect__UpdatePrevData
                  ((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).super.m_Content;
        *(undefined1 *)((long)&(__this->fields).NMIHOKCDLMP + 3) = 0;
        if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
          UVar2 = (UnityEngine_Vector2_Fields)
                  UnityEngine_RectTransform__get_anchoredPosition(pUVar1,(MethodInfo *)0x0);
          (__this->fields).IFDBJFNPOEK.fields = UVar2;
          UnityEngine_UI_ScrollRect__UpdateBounds
                    ((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool IsDragging()  [RVA 0x302E544]
// Nekki.SF2.GUI.SimpleScroll$$IsDragging @ RVA 0x302E544

bool Nekki_SF2_GUI_SimpleScroll__IsDragging(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  return (bool)*(undefined1 *)&(__this->fields).KIANNGNDAFC;
}


// ===== public bool IsNotMovingAndNotDraggingFrames(int ABKNPBMGHKH)  [RVA 0x302E54C]
// Nekki.SF2.GUI.SimpleScroll$$IsNotMovingAndNotDraggingFrames @ RVA 0x302E54C

bool Nekki_SF2_GUI_SimpleScroll__IsNotMovingAndNotDraggingFrames
               (Nekki_SF2_GUI_SimpleScroll_o *__this,int32_t ABKNPBMGHKH,MethodInfo *method)

{
  return (long)ABKNPBMGHKH <= *(long *)&(__this->fields).IHIEPGHGHKH;
}


// ===== public void RollItemsSiblingOrder(int FIONJFAMAEJ)  [RVA 0x302E55C]
// Nekki.SF2.GUI.SimpleScroll$$RollItemsSiblingOrder @ RVA 0x302E55C

void Nekki_SF2_GUI_SimpleScroll__RollItemsSiblingOrder
               (Nekki_SF2_GUI_SimpleScroll_o *__this,int32_t FIONJFAMAEJ,MethodInfo *method)

{
  bool bVar1;
  int32_t index;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  int iVar4;
  
  method_00 = (MethodInfo *)(ulong)(uint)FIONJFAMAEJ;
  if ((DAT_04565cd2 & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04565cd2 = 1;
    method_00 = extraout_x1;
  }
  if (FIONJFAMAEJ != 0) {
    bVar1 = (__this->fields).GNMNFMOHDMG.fields != (UnityEngine_Vector2_Fields)0x0;
    index = Nekki_SF2_GUI_SimpleScroll__LEJPCCHDLBN(__this,method_00);
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Math_TypeInfo);
    }
    iVar4 = -FIONJFAMAEJ;
    if (-1 < FIONJFAMAEJ) {
      iVar4 = FIONJFAMAEJ;
    }
    iVar4 = iVar4 + -1;
    if (FIONJFAMAEJ < 0) {
      do {
        pUVar2 = (__this->fields).super.m_Content;
        if ((pUVar2 == (UnityEngine_RectTransform_o *)0x0) ||
           (pUVar3 = UnityEngine_Transform__GetChild
                               ((UnityEngine_Transform_o *)pUVar2,(uint)bVar1,(MethodInfo *)0x0),
           pUVar3 == (UnityEngine_Transform_o *)0x0)) goto LAB_0312e644;
        UnityEngine_Transform__SetSiblingIndex(pUVar3,index,(MethodInfo *)0x0);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
    else {
      do {
        pUVar2 = (__this->fields).super.m_Content;
        if ((pUVar2 == (UnityEngine_RectTransform_o *)0x0) ||
           (pUVar3 = UnityEngine_Transform__GetChild
                               ((UnityEngine_Transform_o *)pUVar2,index,(MethodInfo *)0x0),
           pUVar3 == (UnityEngine_Transform_o *)0x0)) {
LAB_0312e644:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UnityEngine_Transform__SetSiblingIndex(pUVar3,(uint)bVar1,(MethodInfo *)0x0);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
  }
  return;
}


// ===== private RectTransform CDDJEKNJPEN()  [RVA 0x302AF4C]
// Nekki.SF2.GUI.SimpleScroll$$CDDJEKNJPEN @ RVA 0x302AF4C

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_SimpleScroll__CDDJEKNJPEN(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  int32_t index;
  MethodInfo *extraout_x1;
  UnityEngine_RectTransform_o *pUVar1;
  
  if ((DAT_04565cd3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04565cd3 = 1;
    method = extraout_x1;
  }
  pUVar1 = (__this->fields).super.m_Content;
  index = Nekki_SF2_GUI_SimpleScroll__LEJPCCHDLBN(__this,method);
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    pUVar1 = (UnityEngine_RectTransform_o *)
             UnityEngine_Transform__GetChild
                       ((UnityEngine_Transform_o *)pUVar1,index,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      if (pUVar1->klass != UnityEngine_RectTransform_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
    }
    return pUVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float GetDamperSize()  [RVA 0x302E648]
// Nekki.SF2.GUI.SimpleScroll$$GetDamperSize @ RVA 0x302E648

float Nekki_SF2_GUI_SimpleScroll__GetDamperSize
                (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  short sVar1;
  System_IndexOutOfRangeException_o *__this_00;
  System_String_o *message;
  undefined8 uVar2;
  UnityEngine_Vector2_Fields UVar3;
  float fVar4;
  UnityEngine_Vector2_o UVar5;
  
  UVar3 = (__this->fields).GNMNFMOHDMG.fields;
  if (UVar3 == (UnityEngine_Vector2_Fields)0x0) {
    fVar4 = 0.0;
  }
  else {
    if (*(int *)((long)UVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    if (*(UnityEngine_RectTransform_o **)((long)UVar3 + 0x20) == (UnityEngine_RectTransform_o *)0x0)
    {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UVar5 = UnityEngine_RectTransform__get_sizeDelta
                      (*(UnityEngine_RectTransform_o **)((long)UVar3 + 0x20),(MethodInfo *)0x0);
    fVar4 = UVar5.fields.x;
    sVar1 = (short)(__this->fields).POPINJOHFLF;
    if (sVar1 != 0) {
      if (sVar1 != 1) {
        thunk_FUN_01bb9178(&System_IndexOutOfRangeException_TypeInfo);
        __this_00 = (System_IndexOutOfRangeException_o *)thunk_FUN_01bda818();
        message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_7706/*"Invalid Vector2 index!"*/);
        System_IndexOutOfRangeException___ctor(__this_00,message,(MethodInfo *)0x0);
        uVar2 = thunk_FUN_01bb9178(&Method_UnityEngine_Vector2_get_Item__);
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(__this_00,uVar2);
      }
      fVar4 = UVar5.fields.y;
    }
  }
  return fVar4;
}


// ===== public void Delete(BaseScrollItem IKKAMAMLIKA)  [RVA 0x302E6E4]
// Nekki.SF2.GUI.SimpleScroll$$Delete @ RVA 0x302E6E4

void Nekki_SF2_GUI_SimpleScroll__Delete
               (Nekki_SF2_GUI_SimpleScroll_o *__this,Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,
               MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo *method_00;
  
  if ((DAT_04565cd4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_Remove__);
    DAT_04565cd4 = 1;
  }
  __this_00 = *(System_Collections_Generic_List_object__o **)&(__this->fields)._snapEase;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    method_00 = Method_System_Collections_Generic_List<BaseScrollItem>_Remove__;
    System_Collections_Generic_List<object>__Remove
              (__this_00,(Il2CppObject *)IKKAMAMLIKA,
               (MethodInfo_26E62D4 *)Method_System_Collections_Generic_List<BaseScrollItem>_Remove__
              );
    Nekki_SF2_GUI_SimpleScroll__CJANIMOCLJJ(__this,IKKAMAMLIKA,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MGGKMCMKAPB(Vector2 EMPKHNEPHPO, float PNEIGGOFIOA, Ease GAJONDLDKLI)  [RVA 0x302D504]
// Nekki.SF2.GUI.SimpleScroll$$MGGKMCMKAPB @ RVA 0x302D504

void Nekki_SF2_GUI_SimpleScroll__MGGKMCMKAPB
               (Nekki_SF2_GUI_SimpleScroll_o *__this,UnityEngine_Vector2_o EMPKHNEPHPO,
               float PNEIGGOFIOA,int32_t GAJONDLDKLI,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o UVar1;
  UnityEngine_Vector2_o MJBMLNKAPGC;
  
  __this_00 = (__this->fields).super.m_Content;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_anchoredPosition(__this_00,(MethodInfo *)0x0);
    MJBMLNKAPGC.fields.y = EMPKHNEPHPO.fields.y - UVar1.fields.y;
    MJBMLNKAPGC.fields.x = EMPKHNEPHPO.fields.x - UVar1.fields.x;
    Nekki_SF2_GUI_SimpleScroll__IGENILJIHFN(__this,MJBMLNKAPGC,PNEIGGOFIOA,GAJONDLDKLI,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init()  [RVA 0x302E82C]
// Nekki.SF2.GUI.SimpleScroll$$Init @ RVA 0x302E82C

void Nekki_SF2_GUI_SimpleScroll__Init(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o **ppUVar1;
  bool bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  Il2CppObject *pIVar4;
  UnityEngine_Object_o *pUVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar6;
  UnityEngine_Vector2_Fields UVar7;
  
  if ((DAT_04565cd5 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<HorizontalOrVerticalLayoutGroup>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<Mask>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectMask2D>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_12145/*"SimpleScroll::Init: _visibilityChecker fill with proper RectTransform to optimize rendering"*/);
    DAT_04565cd5 = 1;
  }
  if (__this != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    pUVar3 = (__this->fields).super.m_Content;
    *(ushort *)&(__this->fields).POPINJOHFLF = (__this->fields).super.m_Horizontal ^ 1;
    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
      pIVar4 = UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)pUVar3,
                          Method_UnityEngine_Component_GetComponent<HorizontalOrVerticalLayoutGroup>__
                         );
      *(Il2CppObject **)&(__this->fields).ANKHPKGAHCA = pIVar4;
      thunk_FUN_01c20e04(&(__this->fields).ANKHPKGAHCA);
      pUVar6 = (__this->fields).MOKFCILEKDG;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar2) {
        pUVar3 = (__this->fields).super.m_Content;
        if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312ea3c;
        pUVar5 = (UnityEngine_Object_o *)
                 UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)pUVar3,
                            Method_UnityEngine_Component_GetComponent<RectMask2D>__);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar2 = UnityEngine_Object__op_Equality
                          (pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          pUVar3 = (__this->fields).super.m_Content;
          if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312ea3c;
          pUVar5 = (UnityEngine_Object_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pUVar3,
                              Method_UnityEngine_Component_GetComponent<Mask>__);
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
          }
          bVar2 = UnityEngine_Object__op_Equality
                            (pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar2) {
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogError(StringLiteral_12145/*"SimpleScroll::Init: _visibilityChecker fill with proper RectTransform to optimize rendering"*/,(MethodInfo *)0x0);
          }
        }
      }
      ppUVar1 = &(__this->fields).MOKFCILEKDG;
      pUVar6 = *ppUVar1;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar2) {
        (__this->fields).MOKFCILEKDG =
             (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)(__this->fields).super.m_Viewport;
        thunk_FUN_01c20e04(ppUVar1);
      }
      pUVar3 = (__this->fields).super.m_Content;
      if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
        UVar7 = (UnityEngine_Vector2_Fields)
                UnityEngine_RectTransform__get_anchoredPosition(pUVar3,(MethodInfo *)0x0);
        (__this->fields).IFDBJFNPOEK.fields = UVar7;
        Nekki_SF2_GUI_SimpleScroll__ODFDNFGEDDK(__this,method_00);
        *(undefined2 *)&(__this->fields).NMIHOKCDLMP = 2;
        Nekki_SF2_GUI_SimpleScroll__GHENENOBNFE(__this,method_01);
        Nekki_SF2_GUI_SimpleScroll__PPBANLLIGDK(__this,method_02);
        Nekki_SF2_GUI_SimpleScroll__ClearData(__this,method_03);
        Nekki_SF2_GUI_SimpleScroll__LILEFCCDGNB(__this,method_04);
        return;
      }
    }
  }
LAB_0312ea3c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ScrollToItem(BaseScrollItem IKKAMAMLIKA, float PNEIGGOFIOA, Ease GAJONDLDKLI = 1)  [RVA 0x302BFF0]
// Nekki.SF2.GUI.SimpleScroll$$ScrollToItem @ RVA 0x302BFF0

void Nekki_SF2_GUI_SimpleScroll__ScrollToItem
               (Nekki_SF2_GUI_SimpleScroll_o *__this,Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,
               float PNEIGGOFIOA,int32_t GAJONDLDKLI,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  uint PNALLDHABKO;
  bool bVar5;
  int32_t iVar6;
  int32_t iVar7;
  Nekki_SF2_GUI_BaseScrollItem_o *pNVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_RectTransform_o *IKKAMAMLIKA_00;
  System_IndexOutOfRangeException_o *__this_00;
  System_String_o *message;
  undefined8 uVar10;
  int32_t GAJONDLDKLI_00;
  Nekki_SF2_GUI_BaseScrollItem_o *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  long lVar11;
  uint uVar12;
  UnityEngine_Vector2_Fields UVar13;
  
  method_02 = (MethodInfo *)(ulong)(uint)GAJONDLDKLI;
  pNVar8 = IKKAMAMLIKA;
  if ((DAT_04565cd6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    DAT_04565cd6 = 1;
    pNVar8 = extraout_x1;
  }
  if ((*(char *)&(__this->fields).LNAPCDLIOOE == '\0') &&
     (bVar5 = Nekki_SF2_GUI_SimpleScroll__CanInvokeScrolling(__this,(MethodInfo *)pNVar8), bVar5)) {
    Nekki_SF2_GUI_SimpleScroll__ICHICAKKILG(__this,method_00);
    if ((PNEIGGOFIOA <= 0.01) || (*(char *)((long)&(__this->fields)._visibilityChecker + 1) == '\0')
       ) {
      if (IKKAMAMLIKA != (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) {
        IKKAMAMLIKA_00 =
             Nekki_SF2_GUI_BaseScrollItem__get_RectTransform(IKKAMAMLIKA,(MethodInfo *)0x0);
        UVar13 = (UnityEngine_Vector2_Fields)
                 Nekki_SF2_GUI_SimpleScroll__JJOCMJBGOKG(__this,IKKAMAMLIKA_00,method_02);
        sVar4 = (short)(__this->fields).POPINJOHFLF;
        if ((sVar4 != 0) &&
           (UVar13 = (UnityEngine_Vector2_Fields)((ulong)UVar13 >> 0x20), sVar4 != 1)) {
          thunk_FUN_01bb9178(&System_IndexOutOfRangeException_TypeInfo);
          __this_00 = (System_IndexOutOfRangeException_o *)thunk_FUN_01bda818();
          message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_7706/*"Invalid Vector2 index!"*/);
          System_IndexOutOfRangeException___ctor(__this_00,message,(MethodInfo *)0x0);
          uVar10 = thunk_FUN_01bb9178(&Method_UnityEngine_Vector2_get_Item__);
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(__this_00,uVar10);
        }
        Nekki_SF2_GUI_SimpleScroll__ScrollToOrth
                  (__this,-UVar13.x,PNEIGGOFIOA,GAJONDLDKLI_00,method_02);
        return;
      }
    }
    else {
      pNVar8 = Nekki_SF2_GUI_SimpleScroll__MOKNJIIEIMG(__this,method_01);
      if ((((pNVar8 != (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) &&
           (pUVar9 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
           pUVar9 != (UnityEngine_Transform_o *)0x0)) &&
          (iVar6 = UnityEngine_Transform__GetSiblingIndex(pUVar9,(MethodInfo *)0x0),
          IKKAMAMLIKA != (Nekki_SF2_GUI_BaseScrollItem_o *)0x0)) &&
         (pUVar9 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)IKKAMAMLIKA,(MethodInfo *)0x0),
         pUVar9 != (UnityEngine_Transform_o *)0x0)) {
        iVar7 = UnityEngine_Transform__GetSiblingIndex(pUVar9,(MethodInfo *)0x0);
        lVar11 = *(long *)&(__this->fields)._snapEase;
        if (lVar11 != 0) {
          iVar3 = *(int *)(lVar11 + 0x18);
          if (DAT_04561c43 == '\0') {
            FUN_01bab630(&System_Math_TypeInfo);
            DAT_04561c43 = '\x01';
          }
          PNALLDHABKO = (iVar7 + -1) - (iVar6 + -1);
          if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            uVar12 = -PNALLDHABKO;
            if (-1 < (int)PNALLDHABKO) {
              uVar12 = PNALLDHABKO;
            }
            if (DAT_04561c43 == '\0') {
              FUN_01bab630(&System_Math_TypeInfo);
              DAT_04561c43 = '\x01';
            }
          }
          else {
            uVar12 = -PNALLDHABKO;
            if (-1 < (int)PNALLDHABKO) {
              uVar12 = PNALLDHABKO;
            }
          }
          uVar1 = ((iVar7 + -1) - (iVar3 + iVar6)) + 1;
          if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          uVar2 = -uVar1;
          if (-1 < (int)uVar1) {
            uVar2 = uVar1;
          }
          if (uVar2 <= uVar12) {
            PNALLDHABKO = uVar1;
          }
          Nekki_SF2_GUI_SimpleScroll__JJNHMFIKFBM(__this,PNALLDHABKO,PNEIGGOFIOA,GAJONDLDKLI,method)
          ;
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public Vector2 GetItemSize()  [RVA 0x302A094]
// Nekki.SF2.GUI.SimpleScroll$$GetItemSize @ RVA 0x302A094

UnityEngine_Vector2_o
Nekki_SF2_GUI_SimpleScroll__GetItemSize(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_object__o *__this_00;
  Nekki_SF2_GUI_BaseScrollItem_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  float fVar2;
  float fVar3;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Rect_o UVar5;
  
  if ((DAT_04565cd7 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
    DAT_04565cd7 = 1;
  }
  bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                    (*(System_Collections_Generic_List_T__o **)&(__this->fields)._snapEase,
                     Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
  if (bVar1) {
    if (DAT_0455fa75 == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa75 = '\x01';
    }
    fVar2 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.x;
    fVar3 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.y;
  }
  else {
    __this_00 = *(System_Collections_Generic_List_object__o **)&(__this->fields)._snapEase;
    if (((__this_00 == (System_Collections_Generic_List_object__o *)0x0) ||
        (__this_01 = (Nekki_SF2_GUI_BaseScrollItem_o *)
                     System_Collections_Generic_List<object>__get_Item
                               (__this_00,0,
                                Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__),
        __this_01 == (Nekki_SF2_GUI_BaseScrollItem_o *)0x0)) ||
       (__this_02 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform(__this_01,(MethodInfo *)0x0),
       __this_02 == (UnityEngine_RectTransform_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UVar5 = UnityEngine_RectTransform__get_rect(__this_02,(MethodInfo *)0x0);
    fVar3 = UVar5.fields.m_Height;
    fVar2 = UVar5.fields.m_Width;
  }
  UVar4.fields.y = fVar3;
  UVar4.fields.x = fVar2;
  return (UnityEngine_Vector2_o)UVar4.fields;
}


// ===== public bool CanInvokeScrolling()  [RVA 0x302B1D8]
// Nekki.SF2.GUI.SimpleScroll$$CanInvokeScrolling @ RVA 0x302B1D8

bool Nekki_SF2_GUI_SimpleScroll__CanInvokeScrolling
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
  if ((DAT_04565cd8 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
    DAT_04565cd8 = 1;
  }
  if ((*(char *)&(__this->fields).KIANNGNDAFC != '\0') ||
     (bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                        (*(System_Collections_Generic_List_T__o **)&(__this->fields)._snapEase,
                         Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__), bVar1)) {
    bVar1 = false;
  }
  else {
    bVar1 = Nekki_SF2_GUI_SimpleScroll__IsMoving(__this,method_00);
    bVar1 = !bVar1;
  }
  return bVar1;
}


// ===== public void remove_OnEndDragging(Action CJNHFNHJHPE)  [RVA 0x302EA40]
// Nekki.SF2.GUI.SimpleScroll$$remove_OnEndDragging @ RVA 0x302EA40

void Nekki_SF2_GUI_SimpleScroll__remove_OnEndDragging
               (Nekki_SF2_GUI_SimpleScroll_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method
               )

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Delegate_o *source;
  
  if ((DAT_04565cd9 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04565cd9 = 1;
  }
  source = (System_Delegate_o *)(__this->fields).Items;
  while ((pSVar2 = System_Delegate__Remove
                             (source,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0),
         pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar2 = (System_Delegate_o *)FUN_01c07368(&(__this->fields).Items,pSVar2,source);
    bVar1 = source == pSVar2;
    source = pSVar2;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private Vector2 ODIEMJGFIFB()  [RVA 0x3029F04]
// Nekki.SF2.GUI.SimpleScroll$$ODIEMJGFIFB @ RVA 0x3029F04

UnityEngine_Vector2_o
Nekki_SF2_GUI_SimpleScroll__ODIEMJGFIFB(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_BaseScrollItem_o *__this_00;
  UnityEngine_RectTransform_o *pUVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  float fVar3;
  float fVar4;
  UnityEngine_Rect_o UVar5;
  UnityEngine_Vector2_o UVar6;
  UnityEngine_Vector2_o UVar7;
  
  if ((DAT_04565cda & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565cda = 1;
    method = extraout_x1;
  }
  __this_00 = Nekki_SF2_GUI_SimpleScroll__MOKNJIIEIMG(__this,method);
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
  }
  fVar3 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.x;
  fVar4 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.y;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (!bVar1) {
    if ((__this->fields).super.m_Vertical != false) {
      if ((__this_00 == (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) ||
         (pUVar2 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform(__this_00,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_0312a090;
      UVar6 = UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).super.m_Content;
      if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312a090;
      UVar7 = UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
      fVar4 = UVar6.fields.y + UVar7.fields.y;
      bVar1 = Nekki_SF2_GUI_SimpleScroll__get_IsYcenter(__this,method_00);
      if (bVar1) {
        pUVar2 = (__this->fields).super.m_Content;
        if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312a090;
        UVar5 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
        fVar4 = fVar4 + UVar5.fields.m_Height * 0.5;
      }
      fVar4 = -fVar4;
    }
    if ((__this->fields).super.m_Horizontal != false) {
      if ((__this_00 != (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) &&
         (pUVar2 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform(__this_00,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
        UVar6 = UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
        pUVar2 = (__this->fields).super.m_Content;
        if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
          UVar5 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
          pUVar2 = (__this->fields).super.m_Content;
          if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
            UVar7 = UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
            fVar3 = -(UVar6.fields.x + UVar5.fields.m_Width * -0.5 + UVar7.fields.x);
            goto LAB_0312a070;
          }
        }
      }
LAB_0312a090:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
LAB_0312a070:
  UVar6.fields.y = fVar4;
  UVar6.fields.x = fVar3;
  return (UnityEngine_Vector2_o)UVar6.fields;
}


// ===== private SimpleScroll.LIOIEDNIMLD GIMFBOCFNBN(BaseScrollItem IKKAMAMLIKA)  [RVA 0x302EAE0]
// Nekki.SF2.GUI.SimpleScroll$$GIMFBOCFNBN @ RVA 0x302EAE0

Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *
Nekki_SF2_GUI_SimpleScroll__GIMFBOCFNBN
          (Nekki_SF2_GUI_SimpleScroll_o *__this,Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,
          MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *pNVar2;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_48;
  
  if ((DAT_04565cdb & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>_get_Values__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SimpleScroll_LIOIEDNIMLD>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SimpleScroll_LIOIEDNIMLD>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SimpleScroll_LIOIEDNIMLD>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<string,_SimpleScroll_LIOIEDNIMLD>_GetEnumerator__
                );
    DAT_04565cdb = 1;
  }
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._currentValue = (Il2CppObject *)0x0;
  if ((__this[1].klass == (Nekki_SF2_GUI_SimpleScroll_c *)0x0) ||
     (__this_00 = System_Collections_Generic_Dictionary<object,_object>__get_Values
                            ((System_Collections_Generic_Dictionary_object__object__o *)
                             __this[1].klass,
                             Method_System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>_get_Values__
                            ),
     __this_00 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_Dictionary_ValueCollection<object,_object>__GetEnumerator
            (&local_48,__this_00,
             Method_System_Collections_Generic_Dictionary_ValueCollection<string,_SimpleScroll_LIOIEDNIMLD>_GetEnumerator__
            );
  do {
    bVar1 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SimpleScroll_LIOIEDNIMLD>_MoveNext__
                      );
    pNVar2 = (Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *)local_48.fields._currentValue;
    if (!bVar1) {
      pNVar2 = (Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *)0x0;
      break;
    }
    if ((Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *)local_48.fields._currentValue ==
        (Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD__BBEGHHMIKAO
                      ((Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *)local_48.fields._currentValue,
                       IKKAMAMLIKA,method);
  } while (!bVar1);
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__Dispose
            (&local_48,
             Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SimpleScroll_LIOIEDNIMLD>_Dispose__
            );
  return pNVar2;
}


// ===== public override void OnEndDrag(PointerEventData OHNNFPGGEFK)  [RVA 0x302EC58]
// Nekki.SF2.GUI.SimpleScroll$$OnEndDrag @ RVA 0x302EC58

void Nekki_SF2_GUI_SimpleScroll__OnEndDrag
               (Nekki_SF2_GUI_SimpleScroll_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  undefined8 uVar1;
  MethodInfo *method_00;
  System_Collections_Generic_List_BaseScrollItem__o *pSVar2;
  
  if (*(char *)&(__this->fields).LNAPCDLIOOE != '\0') {
    return;
  }
  Nekki_SF2_GUI_SimpleScroll__CCPABLFBFFA(__this,(MethodInfo *)OHNNFPGGEFK);
  *(undefined1 *)&(__this->fields).KIANNGNDAFC = 0;
  *(undefined8 *)&(__this->fields).IHIEPGHGHKH = 0;
  Nekki_SF2_GUI_SimpleScroll__ICHICAKKILG(__this,method_00);
  UnityEngine_UI_ScrollRect__OnEndDrag
            ((UnityEngine_UI_ScrollRect_o *)__this,OHNNFPGGEFK,(MethodInfo *)0x0);
  pSVar2 = (__this->fields).Items;
  *(undefined2 *)&(__this->fields).NMIHOKCDLMP = 2;
  if (pSVar2 != (System_Collections_Generic_List_BaseScrollItem__o *)0x0) {
    uVar1._0_4_ = pSVar2[1].fields._size;
    uVar1._4_4_ = pSVar2[1].fields._version;
                    /* WARNING: Could not recover jumptable at 0x0312ecc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)&(pSVar2->fields)._size)(uVar1,pSVar2[1].klass);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public BaseScrollItem GetSelectedItemAndLogicId(out int OGPGLGPMEPD)  [RVA 0x302ECCC]
// Nekki.SF2.GUI.SimpleScroll$$GetSelectedItemAndLogicId @ RVA 0x302ECCC

Nekki_SF2_GUI_BaseScrollItem_o *
Nekki_SF2_GUI_SimpleScroll__GetSelectedItemAndLogicId
          (Nekki_SF2_GUI_SimpleScroll_o *__this,int32_t *OGPGLGPMEPD,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_BaseScrollItem_o *x;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_Object_o *x_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  int index;
  
  method_00 = (MethodInfo *)OGPGLGPMEPD;
  if ((DAT_04565cdc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565cdc = 1;
    method_00 = extraout_x1;
  }
  *OGPGLGPMEPD = -1;
  x = Nekki_SF2_GUI_SimpleScroll__MOKNJIIEIMG(__this,method_00);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return x;
  }
  __this_00 = *(System_Collections_Generic_List_object__o **)&(__this->fields)._snapEase;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        return x;
      }
      x_00 = (UnityEngine_Object_o *)
             System_Collections_Generic_List<object>__get_Item
                       (__this_00,index,
                        Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Equality(x_00,(UnityEngine_Object_o *)x,(MethodInfo *)0x0);
      if (bVar1) {
        *OGPGLGPMEPD = index;
        return x;
      }
      __this_00 = *(System_Collections_Generic_List_object__o **)&(__this->fields)._snapEase;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_object__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private BaseScrollItem MOKNJIIEIMG()  [RVA 0x302CB58]
// Nekki.SF2.GUI.SimpleScroll$$MOKNJIIEIMG @ RVA 0x302CB58

Nekki_SF2_GUI_BaseScrollItem_o *
Nekki_SF2_GUI_SimpleScroll__MOKNJIIEIMG(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  short sVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  UnityEngine_Vector3_array *verts4;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_RectTransform_o *t1;
  System_IndexOutOfRangeException_o *__this_01;
  System_String_o *message;
  undefined8 uVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_BaseScrollItem_o *pNVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Rect_o UVar10;
  UnityEngine_Rect_o UVar11;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  
  if ((DAT_04565cdd & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&UnityEngine_Vector3___TypeInfo);
    DAT_04565cdd = 1;
  }
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  verts4 = (UnityEngine_Vector3_array *)FUN_01bab718(UnityEngine_Vector3___TypeInfo,4);
  UVar10 = UnityEngine_TransformExtensions__GetWorldRect
                     ((__this->fields).super.m_Viewport,verts4,(MethodInfo *)0x0);
  fVar7 = UVar10.fields.m_Height * 0.5;
  fVar8 = UVar10.fields.m_YMin + fVar7;
  fVar9 = fVar8;
  if ((__this->fields).super.m_Vertical != false) {
    bVar3 = Nekki_SF2_GUI_SimpleScroll__get_IsYUp(__this,method_00);
    fVar9 = fVar7 + fVar8;
    if (!bVar3) {
      fVar9 = fVar8;
    }
  }
  __this_00 = *(System_Collections_Generic_List_object__o **)&(__this->fields)._snapEase;
  if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_b8,__this_00,
             Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
  local_a0.fields._index = local_b8.fields._index;
  local_a0.fields._version = local_b8.fields._version;
  local_a0.fields._list = local_b8.fields._list;
  local_a0.fields._current = local_b8.fields._current;
  fVar7 = 3.4028235e+38;
  pNVar5 = (Nekki_SF2_GUI_BaseScrollItem_o *)0x0;
  while( true ) {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_a0,
                       Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__)
    ;
    pIVar2 = local_a0.fields._current;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_a0,
                 Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
      return pNVar5;
    }
    if ((Nekki_SF2_GUI_BaseScrollItem_o *)local_a0.fields._current ==
        (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) break;
    t1 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform
                   ((Nekki_SF2_GUI_BaseScrollItem_o *)local_a0.fields._current,(MethodInfo *)0x0);
    UVar11 = UnityEngine_TransformExtensions__GetWorldRect(t1,verts4,(MethodInfo *)0x0);
    if (((__this->fields).super.m_Vertical == false) ||
       (bVar3 = Nekki_SF2_GUI_SimpleScroll__get_IsYUp(__this,method_01), !bVar3)) {
      sVar1 = (short)(__this->fields).POPINJOHFLF;
      if (sVar1 == 0) {
        fVar6 = UVar11.fields.m_XMin + UVar11.fields.m_Width * 0.5;
        fVar8 = UVar10.fields.m_XMin + UVar10.fields.m_Width * 0.5;
      }
      else {
        if (sVar1 != 1) {
          thunk_FUN_01bb9178(&System_IndexOutOfRangeException_TypeInfo);
          __this_01 = (System_IndexOutOfRangeException_o *)thunk_FUN_01bda818();
          message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_7706/*"Invalid Vector2 index!"*/);
          System_IndexOutOfRangeException___ctor(__this_01,message,(MethodInfo *)0x0);
          uVar4 = thunk_FUN_01bb9178(&Method_UnityEngine_Vector2_get_Item__);
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(__this_01,uVar4);
        }
        fVar6 = UVar11.fields.m_YMin + UVar11.fields.m_Height * 0.5;
        fVar8 = fVar9;
      }
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      fVar6 = fVar6 - fVar8;
    }
    else {
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      fVar6 = (UVar11.fields.m_Height + UVar11.fields.m_YMin) - fVar9;
    }
    if (ABS(fVar6) <= fVar7) {
      fVar7 = ABS(fVar6);
      pNVar5 = (Nekki_SF2_GUI_BaseScrollItem_o *)pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool IsMoving()  [RVA 0x302D234]
// Nekki.SF2.GUI.SimpleScroll$$IsMoving @ RVA 0x302D234

/* WARNING: Type propagation algorithm not settling */

bool Nekki_SF2_GUI_SimpleScroll__IsMoving(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  short sVar1;
  System_IndexOutOfRangeException_o *__this_00;
  System_String_o *message;
  undefined8 uVar2;
  UnityEngine_Vector2_o *pUVar3;
  
  if (*(long *)&(__this->fields).JCKMKFCCNAA == 0) {
    sVar1 = (short)(__this->fields).POPINJOHFLF;
    if (sVar1 == 0) {
      pUVar3 = &(__this->fields).super.m_Velocity;
    }
    else {
      if (sVar1 != 1) goto LAB_0312d2ac;
      pUVar3 = (UnityEngine_Vector2_o *)&(__this->fields).super.m_Velocity.fields.y;
    }
    if (ABS((pUVar3->fields).x) <= 0.01) {
      if (sVar1 == 1) {
        pUVar3 = (UnityEngine_Vector2_o *)&(__this->fields).KFDLOCBGNEA.fields.y;
      }
      else {
        if (sVar1 != 0) {
LAB_0312d2ac:
          thunk_FUN_01bb9178(&System_IndexOutOfRangeException_TypeInfo);
          __this_00 = (System_IndexOutOfRangeException_o *)thunk_FUN_01bda818();
          message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_7706/*"Invalid Vector2 index!"*/);
          System_IndexOutOfRangeException___ctor(__this_00,message,(MethodInfo *)0x0);
          uVar2 = thunk_FUN_01bb9178(&Method_UnityEngine_Vector2_get_Item__);
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(__this_00,uVar2);
        }
        pUVar3 = &(__this->fields).KFDLOCBGNEA;
      }
      return 0.01 < ABS((pUVar3->fields).x);
    }
  }
  return true;
}


// ===== private void DNBLJAMKPPB()  [RVA 0x302A4CC]
// Nekki.SF2.GUI.SimpleScroll$$DNBLJAMKPPB @ RVA 0x302A4CC

void Nekki_SF2_GUI_SimpleScroll__DNBLJAMKPPB
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  *(undefined2 *)&(__this->fields).NMIHOKCDLMP = 2;
  return;
}


// ===== public void ClearData()  [RVA 0x302BE70]
// Nekki.SF2.GUI.SimpleScroll$$ClearData @ RVA 0x302BE70

void Nekki_SF2_GUI_SimpleScroll__ClearData(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo *in_x2;
  long lVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04565cde & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    DAT_04565cde = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = *(System_Collections_Generic_List_object__o **)&(__this->fields)._snapEase;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,__this_00,
               Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__
                             ), bVar1) {
      Nekki_SF2_GUI_SimpleScroll__CJANIMOCLJJ
                (__this,(Nekki_SF2_GUI_BaseScrollItem_o *)local_38.fields._current,in_x2);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__
              );
    lVar2 = *(long *)&(__this->fields)._snapEase;
    if (lVar2 != 0) {
      length = *(int32_t *)(lVar2 + 0x18);
      *(undefined4 *)(lVar2 + 0x18) = 0;
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      if (0 < length) {
        System_Array__Clear(*(System_Array_o **)(lVar2 + 0x10),0,length,(MethodInfo *)0x0);
      }
      *(undefined2 *)((long)&(__this->fields).NMIHOKCDLMP + 2) = 0x101;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool HasDumpers()  [RVA 0x302AEC4]
// Nekki.SF2.GUI.SimpleScroll$$HasDumpers @ RVA 0x302AEC4

bool Nekki_SF2_GUI_SimpleScroll__HasDumpers(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  return (__this->fields).GNMNFMOHDMG.fields != (UnityEngine_Vector2_Fields)0x0;
}


// ===== public Ease get_SnapEase()  [RVA 0x302EDE4]
// Nekki.SF2.GUI.SimpleScroll$$get_SnapEase @ RVA 0x302EDE4

int32_t Nekki_SF2_GUI_SimpleScroll__get_SnapEase
                  (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1._0_1_ = (__this->fields)._snap;
  iVar1._1_1_ = (__this->fields)._looped;
  iVar1._2_2_ = *(undefined2 *)&(__this->fields).field_0x14a;
  return iVar1;
}


// ===== private void CJANIMOCLJJ(BaseScrollItem IKKAMAMLIKA)  [RVA 0x302E748]
// Nekki.SF2.GUI.SimpleScroll$$CJANIMOCLJJ @ RVA 0x302E748

void Nekki_SF2_GUI_SimpleScroll__CJANIMOCLJJ
               (Nekki_SF2_GUI_SimpleScroll_o *__this,Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,
               MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  long lVar1;
  
  if ((DAT_04565cdf & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    DAT_04565cdf = 1;
  }
  if (IKKAMAMLIKA != (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) {
    method_00 = (IKKAMAMLIKA->klass->vtable)._47_EnableVisibility.method;
    (*(IKKAMAMLIKA->klass->vtable)._47_EnableVisibility.methodPtr)(IKKAMAMLIKA,0);
    if ((__this->fields).HBNEMFAMCED ==
        (System_Collections_Generic_Dictionary_string__SimpleScroll_LIOIEDNIMLD__o *)0x0) {
      __this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)IKKAMAMLIKA,(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_Transform_o *)0x0) goto LAB_0312e828;
      UnityEngine_Transform__SetParent(__this_01,(UnityEngine_Transform_o *)0x0,(MethodInfo *)0x0);
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)IKKAMAMLIKA,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
    }
    else {
      __this_00 = Nekki_SF2_GUI_SimpleScroll__GIMFBOCFNBN(__this,IKKAMAMLIKA,method_00);
      if (__this_00 == (Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *)0x0) goto LAB_0312e828;
      Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD__KIANJPCPEGE
                (__this_00,IKKAMAMLIKA,(OGNCMFBMBMB_o *)(__this->fields).HBNEMFAMCED,in_x3);
    }
    lVar1 = *(long *)&(__this->fields)._snapEase;
    *(undefined1 *)((long)&(__this->fields).NMIHOKCDLMP + 2) = 1;
    *(undefined2 *)&(__this->fields).NMIHOKCDLMP = 2;
    if (lVar1 != 0) {
      if (*(int *)(lVar1 + 0x18) < 1) {
        *(undefined1 *)((long)&(__this->fields).NMIHOKCDLMP + 3) = 1;
      }
      return;
    }
  }
LAB_0312e828:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool DANJIKFLOAJ()  [RVA 0x302B708]
// Nekki.SF2.GUI.SimpleScroll$$DANJIKFLOAJ @ RVA 0x302B708

bool Nekki_SF2_GUI_SimpleScroll__DANJIKFLOAJ
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  if ((__this->fields).super.m_Vertical != false) {
    return (__this->fields).KFDLOCBGNEA.fields.y < 0.0;
  }
  if ((__this->fields).super.m_Horizontal != false) {
    return 0.0 < (__this->fields).KFDLOCBGNEA.fields.x;
  }
  return false;
}


// ===== private void ICHICAKKILG()  [RVA 0x302A490]
// Nekki.SF2.GUI.SimpleScroll$$ICHICAKKILG @ RVA 0x302A490

void Nekki_SF2_GUI_SimpleScroll__ICHICAKKILG
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if (*(char *)&(__this->fields).LNAPCDLIOOE == '\0') {
    if (*(char *)((long)&(__this->fields).NMIHOKCDLMP + 2) != '\0') {
      Nekki_SF2_GUI_SimpleScroll__GHENENOBNFE(__this,method);
      method = extraout_x1;
    }
    if (*(char *)((long)&(__this->fields).NMIHOKCDLMP + 3) != '\0') {
      Nekki_SF2_GUI_SimpleScroll__LILEFCCDGNB(__this,method);
      return;
    }
  }
  return;
}


// ===== public float get_SnapTime()  [RVA 0x302EE7C]
// Nekki.SF2.GUI.SimpleScroll$$get_SnapTime @ RVA 0x302EE7C

float Nekki_SF2_GUI_SimpleScroll__get_SnapTime
                (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  return *(float *)&(__this->fields).field_0x14c;
}


// ===== public void UsePoolPrefab(string PMACBPAMPJA, BaseScrollItem DKIDCBPNMPD)  [RVA 0x302EE84]
// Nekki.SF2.GUI.SimpleScroll$$UsePoolPrefab @ RVA 0x302EE84

void Nekki_SF2_GUI_SimpleScroll__UsePoolPrefab
               (Nekki_SF2_GUI_SimpleScroll_o *__this,System_String_o *PMACBPAMPJA,
               Nekki_SF2_GUI_BaseScrollItem_o *DKIDCBPNMPD,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__SimpleScroll_LIOIEDNIMLD__o **ppSVar1;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar2;
  bool bVar3;
  System_Collections_Generic_Dictionary_string__SimpleScroll_LIOIEDNIMLD__o *pSVar4;
  Nekki_SF2_GUI_SimpleScroll_c *pNVar5;
  Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *__this_00;
  MethodInfo *method_00;
  Il2CppObject *local_28;
  
  if ((DAT_04565ce0 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>_TryGetValue__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_TypeInfo);
    DAT_04565ce0 = 1;
  }
  if ((__this->fields).HBNEMFAMCED ==
      (System_Collections_Generic_Dictionary_string__SimpleScroll_LIOIEDNIMLD__o *)0x0) {
    ppSVar1 = &(__this->fields).HBNEMFAMCED;
    pSVar4 = (System_Collections_Generic_Dictionary_string__SimpleScroll_LIOIEDNIMLD__o *)
             OGNCMFBMBMB__AIHNLLGNBLC((MethodInfo *)0x0);
    *ppSVar1 = pSVar4;
    thunk_FUN_01c20e04(ppSVar1,pSVar4);
  }
  pNVar5 = __this[1].klass;
  pNVar2 = __this + 1;
  if (pNVar5 == (Nekki_SF2_GUI_SimpleScroll_c *)0x0) {
    pNVar5 = (Nekki_SF2_GUI_SimpleScroll_c *)
             thunk_FUN_01bda818(
                               System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>_TypeInfo
                               );
    System_Collections_Generic_Dictionary<object,_object>___ctor
              ((System_Collections_Generic_Dictionary_object__object__o *)pNVar5,
               Method_System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>__ctor__
              );
    pNVar2->klass = pNVar5;
    thunk_FUN_01c20e04(pNVar2,pNVar5);
    pNVar5 = pNVar2->klass;
    local_28 = (Il2CppObject *)0x0;
    if (pNVar5 == (Nekki_SF2_GUI_SimpleScroll_c *)0x0) goto LAB_0312efd4;
  }
  local_28 = (Il2CppObject *)0x0;
  method_00 = 
  Method_System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>_TryGetValue__;
  bVar3 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                    ((System_Collections_Generic_Dictionary_object__object__o *)pNVar5,
                     (Il2CppObject *)PMACBPAMPJA,&local_28,
                     (MethodInfo_2334730 *)
                     Method_System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>_TryGetValue__
                    );
  if (!bVar3) {
    pNVar5 = pNVar2->klass;
    __this_00 = (Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *)
                thunk_FUN_01bda818(Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_TypeInfo);
    Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD___ctor(__this_00,DKIDCBPNMPD,PMACBPAMPJA,method_00);
    if (pNVar5 == (Nekki_SF2_GUI_SimpleScroll_c *)0x0) {
LAB_0312efd4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_Dictionary<object,_object>__Add
              ((System_Collections_Generic_Dictionary_object__object__o *)pNVar5,
               (Il2CppObject *)PMACBPAMPJA,(Il2CppObject *)__this_00,
               Method_System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>_Add__)
    ;
  }
  return;
}


// ===== public float GetScrollX()  [RVA 0x302CF4C]
// Nekki.SF2.GUI.SimpleScroll$$GetScrollX @ RVA 0x302CF4C

float Nekki_SF2_GUI_SimpleScroll__GetScrollX
                (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o UVar1;
  
  __this_00 = (__this->fields).super.m_Content;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_anchoredPosition(__this_00,(MethodInfo *)0x0);
    return UVar1.fields.x;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void add_OnScrollEnded(Action CJNHFNHJHPE)  [RVA 0x302F090]
// Nekki.SF2.GUI.SimpleScroll$$add_OnScrollEnded @ RVA 0x302F090

void Nekki_SF2_GUI_SimpleScroll__add_OnScrollEnded
               (Nekki_SF2_GUI_SimpleScroll_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method
               )

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_BaseScrollItem__o *pSVar3;
  System_Action_BaseScrollItem__o *a;
  
  if ((DAT_04565ce1 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04565ce1 = 1;
  }
  a = (__this->fields).FOKMEOHPDJL;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_BaseScrollItem__o *)FUN_01c07368(&(__this->fields).FOKMEOHPDJL,pSVar2,a)
    ;
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void remove_OnScrollEnded(Action CJNHFNHJHPE)  [RVA 0x302F130]
// Nekki.SF2.GUI.SimpleScroll$$remove_OnScrollEnded @ RVA 0x302F130

void Nekki_SF2_GUI_SimpleScroll__remove_OnScrollEnded
               (Nekki_SF2_GUI_SimpleScroll_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method
               )

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_BaseScrollItem__o *pSVar3;
  System_Action_BaseScrollItem__o *source;
  
  if ((DAT_04565ce2 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04565ce2 = 1;
  }
  source = (__this->fields).FOKMEOHPDJL;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_BaseScrollItem__o *)
             FUN_01c07368(&(__this->fields).FOKMEOHPDJL,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public bool IsContentBiggerThanView()  [RVA 0x302D030]
// Nekki.SF2.GUI.SimpleScroll$$IsContentBiggerThanView @ RVA 0x302D030

bool Nekki_SF2_GUI_SimpleScroll__IsContentBiggerThanView
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  short sVar1;
  UnityEngine_RectTransform_o *__this_00;
  System_IndexOutOfRangeException_o *__this_01;
  System_String_o *message;
  undefined8 uVar2;
  int16_t *piVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Rect_o UVar6;
  
  sVar1 = (short)(__this->fields).POPINJOHFLF;
  if (sVar1 == 1) {
    piVar3 = (int16_t *)&(__this->fields).field_0x1a4;
  }
  else {
    if (sVar1 != 0) goto LAB_0312d098;
    piVar3 = &(__this->fields).GCNFFAAPOKE;
  }
  __this_00 = (__this->fields).super.m_Viewport;
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  fVar5 = *(float *)piVar3;
  UVar6 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
  sVar1 = (short)(__this->fields).POPINJOHFLF;
  fVar4 = UVar6.fields.m_Width;
  if ((sVar1 == 0) || (fVar4 = UVar6.fields.m_Height, sVar1 == 1)) {
    return fVar4 <= fVar5;
  }
LAB_0312d098:
  thunk_FUN_01bb9178(&System_IndexOutOfRangeException_TypeInfo);
  __this_01 = (System_IndexOutOfRangeException_o *)thunk_FUN_01bda818();
  message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_7706/*"Invalid Vector2 index!"*/);
  System_IndexOutOfRangeException___ctor(__this_01,message,(MethodInfo *)0x0);
  uVar2 = thunk_FUN_01bb9178(&Method_UnityEngine_Vector2_get_Item__);
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_01,uVar2);
}


// ===== private void OLABKBMECLF(ref Vector2 JGMCOMCBLPG)  [RVA 0x302D390]
// Nekki.SF2.GUI.SimpleScroll$$OLABKBMECLF @ RVA 0x302D390

void Nekki_SF2_GUI_SimpleScroll__OLABKBMECLF
               (Nekki_SF2_GUI_SimpleScroll_o *__this,UnityEngine_Vector2_o *JGMCOMCBLPG,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  UnityEngine_Vector2_Fields UVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Rect_o UVar8;
  UnityEngine_Vector2_o UVar9;
  
  if (((__this->fields).super.m_Vertical != false) &&
     (*(char *)((long)&(__this->fields)._visibilityChecker + 1) == '\0')) {
    pUVar2 = (__this->fields).super.m_Viewport;
    if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312d4fc;
    fVar5 = *(float *)&(__this->fields).field_0x1a4;
    UVar8 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
    fVar4 = 0.0;
    if (fVar5 <= UVar8.fields.m_Height) {
      fVar6 = 0.0;
    }
    else {
      pUVar2 = (__this->fields).super.m_Viewport;
      if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312d4fc;
      UVar8 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
      fVar7 = fVar5 - UVar8.fields.m_Height;
      bVar1 = Nekki_SF2_GUI_SimpleScroll__get_IsYUp(__this,method_00);
      if (bVar1) {
        UVar3 = (__this->fields).GNMNFMOHDMG.fields;
        fVar4 = 0.0;
        fVar6 = fVar7;
        if (UVar3 != (UnityEngine_Vector2_Fields)0x0) {
          if (*(int *)((long)UVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          if (*(UnityEngine_RectTransform_o **)((long)UVar3 + 0x20) ==
              (UnityEngine_RectTransform_o *)0x0) {
LAB_0312d4fc:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          UVar9 = UnityEngine_RectTransform__get_sizeDelta
                            (*(UnityEngine_RectTransform_o **)((long)UVar3 + 0x20),(MethodInfo *)0x0
                            );
          fVar4 = UVar9.fields.y;
          pUVar2 = Nekki_SF2_GUI_SimpleScroll__CDDJEKNJPEN(__this,method_02);
          if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312d4fc;
          UVar8 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
          fVar6 = (fVar5 + fVar4) - UVar8.fields.m_Height;
        }
      }
      else {
        bVar1 = Nekki_SF2_GUI_SimpleScroll__get_IsYcenter(__this,method_01);
        fVar6 = 0.0;
        if (bVar1) {
          if ((__this->fields).GNMNFMOHDMG.fields == (UnityEngine_Vector2_Fields)0x0) {
            fVar6 = fVar7 * 0.5;
            fVar4 = fVar7 * -0.5;
          }
          else {
            pUVar2 = Nekki_SF2_GUI_SimpleScroll__FNJPFFGAMPF(__this,method_03);
            if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312d4fc;
            UVar8 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
            pUVar2 = Nekki_SF2_GUI_SimpleScroll__CDDJEKNJPEN(__this,method_04);
            if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312d4fc;
            fVar6 = fVar5 * 0.5 - UVar8.fields.m_Height * 0.5;
            UVar8 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
            fVar4 = UVar8.fields.m_Height * 0.5 - fVar5 * 0.5;
          }
        }
      }
    }
    fVar7 = (JGMCOMCBLPG->fields).y;
    fVar5 = fVar6 + -0.001;
    if (fVar7 <= fVar6 + -0.001) {
      fVar5 = fVar7;
    }
    if (fVar7 < fVar4 + 0.001) {
      fVar5 = fVar4 + 0.001;
    }
    (JGMCOMCBLPG->fields).y = fVar5;
  }
  return;
}


// ===== private void Update()  [RVA 0x302F1D0]
// Nekki.SF2.GUI.SimpleScroll$$Update @ RVA 0x302F1D0

void Nekki_SF2_GUI_SimpleScroll__Update(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_04;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_05;
  short sVar2;
  
  if ((DAT_04565ce3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
    DAT_04565ce3 = 1;
    method = extraout_x1;
  }
  if (*(char *)&(__this->fields).LNAPCDLIOOE == '\0') {
    if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
    }
    bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if (bVar1) {
      Nekki_SF2_GUI_SimpleScroll__ICHICAKKILG(__this,method_00);
      bVar1 = Nekki_SF2_GUI_SimpleScroll__IsMoving(__this,method_01);
      if (((bVar1) || (*(char *)&(__this->fields).KIANNGNDAFC != '\0')) ||
         (sVar2 = *(short *)&(__this->fields).NMIHOKCDLMP, 0 < sVar2)) {
        Nekki_SF2_GUI_SimpleScroll__PMAAPFAKLNJ(__this,method_02);
        sVar2 = *(short *)&(__this->fields).NMIHOKCDLMP;
      }
      *(short *)&(__this->fields).NMIHOKCDLMP = sVar2 + -1;
      bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                        (*(System_Collections_Generic_List_T__o **)&(__this->fields)._snapEase,
                         Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
      if (bVar1) {
        Nekki_SF2_GUI_SimpleScroll__LILEFCCDGNB(__this,method_03);
        method_05 = extraout_x1_00;
      }
      else {
        Nekki_SF2_GUI_SimpleScroll__JJLHMNAMHIL(__this,method_03);
        Nekki_SF2_GUI_SimpleScroll__ECJKHJHFOAF(__this,method_04);
        method_05 = extraout_x1_01;
      }
      bVar1 = Nekki_SF2_GUI_SimpleScroll__IsMoving(__this,method_05);
      if ((bVar1) || (*(char *)&(__this->fields).KIANNGNDAFC != '\0')) {
        *(undefined8 *)&(__this->fields).IHIEPGHGHKH = 0;
      }
      else {
        *(long *)&(__this->fields).IHIEPGHGHKH = *(long *)&(__this->fields).IHIEPGHGHKH + 1;
      }
    }
  }
  return;
}


// ===== private void IHPFMMHKLOH()  [RVA 0x302BD2C]
// Nekki.SF2.GUI.SimpleScroll$$IHPFMMHKLOH @ RVA 0x302BD2C

void Nekki_SF2_GUI_SimpleScroll__IHPFMMHKLOH
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  *(undefined1 *)((long)&(__this->fields).NMIHOKCDLMP + 2) = 1;
  return;
}


// ===== public BaseScrollItem AddItemFromPool(bool FKNKAMAGHAI, string PMACBPAMPJA)  [RVA 0x302F2D8]
// Nekki.SF2.GUI.SimpleScroll$$AddItemFromPool @ RVA 0x302F2D8

Nekki_SF2_GUI_BaseScrollItem_o *
Nekki_SF2_GUI_SimpleScroll__AddItemFromPool
          (Nekki_SF2_GUI_SimpleScroll_o *__this,bool FKNKAMAGHAI,System_String_o *PMACBPAMPJA,
          MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *__this_00;
  Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA;
  MethodInfo *method_00;
  
  if ((DAT_04565ce4 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>_get_Item__
                );
    DAT_04565ce4 = 1;
  }
  if (__this[1].klass != (Nekki_SF2_GUI_SimpleScroll_c *)0x0) {
    method_00 = 
    Method_System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>_get_Item__;
    __this_00 = (Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *)
                System_Collections_Generic_Dictionary<object,_object>__get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)
                           __this[1].klass,(Il2CppObject *)PMACBPAMPJA,
                           (MethodInfo_2332EA4 *)
                           Method_System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>_get_Item__
                          );
    if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *)0x0) {
      IKKAMAMLIKA = Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD__DGADHCHFLKN
                              (__this_00,(OGNCMFBMBMB_o *)(__this->fields).HBNEMFAMCED,method_00);
      Nekki_SF2_GUI_SimpleScroll__AddItem(__this,IKKAMAMLIKA,FKNKAMAGHAI,method);
      return IKKAMAMLIKA;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

