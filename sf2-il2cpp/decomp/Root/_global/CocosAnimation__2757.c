// TypeDefIndex 2757
// Namespace: 
// public class CocosAnimation : MonoBehaviour
// Fields:
//   public UnityEvent OnAnimationComplete; // 0x20
//   private bool _autoSize; // 0x28
//   private bool <NOAJIBNJKPE>k__BackingField; // 0x29
//   private int <BNKDPKMAPPM>k__BackingField; // 0x2C
//   private bool <JJCDMHFHJAB>k__BackingField; // 0x30
//   private int <FEBBHCOAEMI>k__BackingField; // 0x34
//   private float <PPEGDOHGLJJ>k__BackingField; // 0x38
//   private RectTransform <MPAMHJJKABE>k__BackingField; // 0x40
//   private readonly List<Sprite> HKCNDNBLAHI; // 0x48
//   private GameObject KPLNDDMCNIH; // 0x50
//   private BMNKDDCJACM CAOKGHKPFAE; // 0x58
//   private float BJIKPLGMOMI; // 0x60
//   private int FJJPFEGPEFA; // 0x64
//   private int PAGAGEMKILK; // 0x68
//   private int OFNNCOJAFJB; // 0x6C
//   private CocosAnimation.LCPKALAIIFG FIGKMEJEHGE; // 0x70
//   private CocosAnimation.ELBHBMFFPKK CAFKGBHLMOI; // 0x74
//   private float ABPCDFJHJCM; // 0x78

// ===== public Vector2 get_ChildSize()  [RVA 0x33F7B24]
// CocosAnimation$$get_ChildSize @ RVA 0x33F7B24

UnityEngine_Vector2_o CocosAnimation__get_ChildSize(CocosAnimation_o *__this,MethodInfo *method)

{
  BMNKDDCJACM_o *pBVar1;
  float in_s1;
  UnityEngine_Vector2_o UVar2;
  
  pBVar1 = (__this->fields).CAOKGHKPFAE;
  if (pBVar1 != (BMNKDDCJACM_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034f7b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UVar2.fields.x =
         (float)(*(code *)pBVar1->klass[1]._1.element_class)(pBVar1,pBVar1->klass[1]._1.castClass);
    UVar2.fields.y = in_s1;
    return (UnityEngine_Vector2_o)UVar2.fields;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Render(float BLENDMCELBE)  [RVA 0x33F7B48]
// CocosAnimation$$Render @ RVA 0x33F7B48

void CocosAnimation__Render(CocosAnimation_o *__this,float BLENDMCELBE,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  float fVar3;
  float fVar4;
  
  if (((__this->fields)._JJCDMHFHJAB_k__BackingField != false) &&
     ((__this->fields).CAOKGHKPFAE != (BMNKDDCJACM_o *)0x0)) {
    fVar4 = (__this->fields)._PPEGDOHGLJJ_k__BackingField;
    fVar3 = (__this->fields).BJIKPLGMOMI + BLENDMCELBE;
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar3) && !NAN(fVar4)) {
      bVar1 = fVar3 < fVar4;
      bVar2 = false;
    }
    while ((__this->fields).BJIKPLGMOMI = fVar3, bVar1 == bVar2) {
      CocosAnimation__NKCPDMKJNII(__this,method);
      fVar4 = (__this->fields)._PPEGDOHGLJJ_k__BackingField;
      fVar3 = (__this->fields).BJIKPLGMOMI - fVar4;
      bVar2 = NAN(fVar3) || NAN(fVar4);
      method = extraout_x1;
      bVar1 = fVar3 < fVar4;
    }
  }
  return;
}


// ===== public void SetLastFrame()  [RVA 0x33F7C0C]
// CocosAnimation$$SetLastFrame @ RVA 0x33F7C0C

void CocosAnimation__SetLastFrame(CocosAnimation_o *__this,MethodInfo *method)

{
  int32_t JJMCKHDALCF;
  MethodInfo *in_x2;
  
  JJMCKHDALCF = (__this->fields).OFNNCOJAFJB;
  (__this->fields).FIGKMEJEHGE = -1;
  (__this->fields).FJJPFEGPEFA = JJMCKHDALCF;
  CocosAnimation__DHEBEHGMBOA(__this,JJMCKHDALCF,in_x2);
  (__this->fields)._JJCDMHFHJAB_k__BackingField = true;
  (__this->fields).BJIKPLGMOMI = 0.0;
  return;
}


// ===== public bool get_AutoSize()  [RVA 0x33F7E30]
// CocosAnimation$$get_AutoSize @ RVA 0x33F7E30

bool CocosAnimation__get_AutoSize(CocosAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields)._autoSize;
}


// ===== private void KACLIDKGHGE(int CJNHFNHJHPE)  [RVA 0x33F7E38]
// CocosAnimation$$KACLIDKGHGE @ RVA 0x33F7E38

void CocosAnimation__KACLIDKGHGE(CocosAnimation_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._BNKDPKMAPPM_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void set_Iterations(int CJNHFNHJHPE)  [RVA 0x33F7E40]
// CocosAnimation$$set_Iterations @ RVA 0x33F7E40

void CocosAnimation__set_Iterations(CocosAnimation_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._FEBBHCOAEMI_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void DFFEJLJIHAE(RectTransform CJNHFNHJHPE)  [RVA 0x33F7E48]
// CocosAnimation$$DFFEJLJIHAE @ RVA 0x33F7E48

void CocosAnimation__DFFEJLJIHAE
               (CocosAnimation_o *__this,UnityEngine_RectTransform_o *CJNHFNHJHPE,MethodInfo *method
               )

{
  (__this->fields)._MPAMHJJKABE_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public float GetAnimationCycleTime()  [RVA 0x33F7E50]
// CocosAnimation$$GetAnimationCycleTime @ RVA 0x33F7E50

float CocosAnimation__GetAnimationCycleTime(CocosAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields)._PPEGDOHGLJJ_k__BackingField *
         (float)(__this->fields)._BNKDPKMAPPM_k__BackingField;
}


// ===== private void HLJHPOBANKM(bool CJNHFNHJHPE)  [RVA 0x33F7E64]
// CocosAnimation$$HLJHPOBANKM @ RVA 0x33F7E64

void CocosAnimation__HLJHPOBANKM(CocosAnimation_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._JJCDMHFHJAB_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void set_AutoSize(bool CJNHFNHJHPE)  [RVA 0x33F7E70]
// CocosAnimation$$set_AutoSize @ RVA 0x33F7E70

void CocosAnimation__set_AutoSize(CocosAnimation_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._autoSize = CJNHFNHJHPE;
  return;
}


// ===== public float get_ChangeSpriteTime()  [RVA 0x33F7E7C]
// CocosAnimation$$get_ChangeSpriteTime @ RVA 0x33F7E7C

float CocosAnimation__get_ChangeSpriteTime(CocosAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields)._PPEGDOHGLJJ_k__BackingField;
}


// ===== public void SetFramesRange(int PEOMJHJICCM, int GKBCJOEFFCP = -1)  [RVA 0x33F7E84]
// CocosAnimation$$SetFramesRange @ RVA 0x33F7E84

void CocosAnimation__SetFramesRange
               (CocosAnimation_o *__this,int32_t PEOMJHJICCM,int32_t GKBCJOEFFCP,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  System_String_array *values;
  System_String_o *pSVar3;
  System_Collections_Generic_List_Sprite__o *pSVar4;
  int32_t local_34;
  int local_28;
  int32_t iStack_24;
  
  local_28 = GKBCJOEFFCP;
  iStack_24 = PEOMJHJICCM;
  if ((DAT_04567f9b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Sprite>_get_Count__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_255/*" : "*/);
    FUN_01bab630(&StringLiteral_4449/*"CocosAnimation::SetFramesRange: incorrect range: ( "*/);
    FUN_01bab630(&StringLiteral_228/*" ) FramesCount: "*/);
    DAT_04567f9b = 1;
  }
  pSVar3 = StringLiteral_4449/*"CocosAnimation::SetFramesRange: incorrect range: ( "*/;
  local_34 = 0;
  iVar1 = GKBCJOEFFCP;
  iVar2 = local_28;
  if (GKBCJOEFFCP < 0) {
    pSVar4 = (__this->fields).HKCNDNBLAHI;
    if (pSVar4 == (System_Collections_Generic_List_Sprite__o *)0x0) goto LAB_034f80cc;
    iVar1 = (pSVar4->fields)._size + -1;
    iVar2 = iVar1;
  }
  local_28 = iVar1;
  if ((-1 < PEOMJHJICCM) && (PEOMJHJICCM <= local_28)) {
    pSVar4 = (__this->fields).HKCNDNBLAHI;
    if (pSVar4 == (System_Collections_Generic_List_Sprite__o *)0x0) goto LAB_034f80cc;
    if (local_28 < (pSVar4->fields)._size) goto LAB_034f80a0;
  }
  local_28 = iVar2;
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
  iVar2 = local_28;
  if (values == (System_String_array *)0x0) {
LAB_034f80cc:
    local_28 = iVar2;
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((int)values->max_length != 0) {
    values->m_Items[0] = pSVar3;
    thunk_FUN_01c20e04(values->m_Items,pSVar3);
    pSVar3 = System_Int32__ToString((int32_t)&iStack_24,(MethodInfo *)0x0);
    if (1 < (uint)values->max_length) {
      values->m_Items[1] = pSVar3;
      thunk_FUN_01c20e04(values->m_Items + 1,pSVar3);
      if (2 < (uint)values->max_length) {
        values->m_Items[2] = StringLiteral_255/*" : "*/;
        thunk_FUN_01c20e04(values->m_Items + 2);
        pSVar3 = System_Int32__ToString((int32_t)&local_28,(MethodInfo *)0x0);
        if (3 < (uint)values->max_length) {
          values->m_Items[3] = pSVar3;
          thunk_FUN_01c20e04(values->m_Items + 3,pSVar3);
          if (4 < (uint)values->max_length) {
            values->m_Items[4] = StringLiteral_228/*" ) FramesCount: "*/;
            thunk_FUN_01c20e04();
            pSVar4 = (__this->fields).HKCNDNBLAHI;
            iVar2 = local_28;
            if (pSVar4 == (System_Collections_Generic_List_Sprite__o *)0x0) goto LAB_034f80cc;
            local_34 = (pSVar4->fields)._size;
            pSVar3 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
            if (5 < (uint)values->max_length) {
              values->m_Items[5] = pSVar3;
              thunk_FUN_01c20e04();
              pSVar3 = System_String__Concat(values,(MethodInfo *)0x0);
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
              }
              UnityEngine_Debug__LogError((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
              PEOMJHJICCM = iStack_24;
LAB_034f80a0:
              (__this->fields).PAGAGEMKILK = PEOMJHJICCM;
              (__this->fields).OFNNCOJAFJB = local_28;
              (__this->fields)._BNKDPKMAPPM_k__BackingField = (local_28 - PEOMJHJICCM) + 1;
              (__this->fields).BJIKPLGMOMI = 0.0;
              (__this->fields).FJJPFEGPEFA = PEOMJHJICCM;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public void set_ChildSize(Vector2 CJNHFNHJHPE)  [RVA 0x33F80D0]
// CocosAnimation$$set_ChildSize @ RVA 0x33F80D0

void CocosAnimation__set_ChildSize
               (CocosAnimation_o *__this,UnityEngine_Vector2_o CJNHFNHJHPE,MethodInfo *method)

{
  BMNKDDCJACM_o *pBVar1;
  
  pBVar1 = (__this->fields).CAOKGHKPFAE;
  if (pBVar1 != (BMNKDDCJACM_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034f80e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pBVar1->klass->vtable)._7_unknown.methodPtr)
              (pBVar1,(pBVar1->klass->vtable)._7_unknown.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(CJNHFNHJHPE.fields.x,CJNHFNHJHPE.fields.y);
}


// ===== public RectTransform get_RectTransform()  [RVA 0x33F80F0]
// CocosAnimation$$get_RectTransform @ RVA 0x33F80F0

UnityEngine_RectTransform_o *
CocosAnimation__get_RectTransform(CocosAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields)._MPAMHJJKABE_k__BackingField;
}


// ===== public Color get_Color()  [RVA 0x33F80F8]
// CocosAnimation$$get_Color @ RVA 0x33F80F8

UnityEngine_Color_o CocosAnimation__get_Color(CocosAnimation_o *__this,MethodInfo *method)

{
  BMNKDDCJACM_o *pBVar1;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  UnityEngine_Color_o UVar2;
  
  pBVar1 = (__this->fields).CAOKGHKPFAE;
  if (pBVar1 != (BMNKDDCJACM_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034f8114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UVar2.fields.r = (*(code *)pBVar1->klass[1]._1.declaringType)(pBVar1,pBVar1->klass[1]._1.parent)
    ;
    UVar2.fields.g = (float)in_s1;
    UVar2.fields.a = (float)in_s3;
    UVar2.fields.b = (float)in_s2;
    return (UnityEngine_Color_o)UVar2.fields;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Vector2 get_RectAnchor()  [RVA 0x33F811C]
// CocosAnimation$$get_RectAnchor @ RVA 0x33F811C

UnityEngine_Vector2_o CocosAnimation__get_RectAnchor(CocosAnimation_o *__this,MethodInfo *method)

{
  BMNKDDCJACM_o *pBVar1;
  float in_s1;
  UnityEngine_Vector2_o UVar2;
  
  pBVar1 = (__this->fields).CAOKGHKPFAE;
  if (pBVar1 != (BMNKDDCJACM_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034f8138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UVar2.fields.x =
         (float)(*pBVar1->klass[1]._1.this_arg.data)
                          (pBVar1,*(undefined8 *)&pBVar1->klass[1]._1.this_arg.bits);
    UVar2.fields.y = in_s1;
    return (UnityEngine_Vector2_o)UVar2.fields;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetSpriteDrawMode(SpriteDrawMode COMPCBNGHIL)  [RVA 0x33F8140]
// CocosAnimation$$SetSpriteDrawMode @ RVA 0x33F8140

void CocosAnimation__SetSpriteDrawMode
               (CocosAnimation_o *__this,int32_t COMPCBNGHIL,MethodInfo *method)

{
  BMNKDDCJACM_o *pBVar1;
  
  pBVar1 = (__this->fields).CAOKGHKPFAE;
  if (pBVar1 != (BMNKDDCJACM_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034f8158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pBVar1->klass->vtable)._4_unknown.methodPtr)
              (pBVar1,(ulong)(uint)COMPCBNGHIL,(pBVar1->klass->vtable)._4_unknown.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,(ulong)(uint)COMPCBNGHIL);
}


// ===== public int get_Iterations()  [RVA 0x33F8160]
// CocosAnimation$$get_Iterations @ RVA 0x33F8160

int32_t CocosAnimation__get_Iterations(CocosAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields)._FEBBHCOAEMI_k__BackingField;
}


// ===== public void Visible()  [RVA 0x33F8168]
// CocosAnimation$$Visible @ RVA 0x33F8168

void CocosAnimation__Visible(CocosAnimation_o *__this,MethodInfo *method)

{
  BMNKDDCJACM_o *pBVar1;
  
  pBVar1 = (__this->fields).CAOKGHKPFAE;
  if (pBVar1 != (BMNKDDCJACM_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034f8188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pBVar1->klass->vtable)._6_unknown.methodPtr)
              ((__this->fields).ABPCDFJHJCM,pBVar1,(pBVar1->klass->vtable)._6_unknown.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_Color(Color CJNHFNHJHPE)  [RVA 0x33F81B0]
// CocosAnimation$$set_Color @ RVA 0x33F81B0

void CocosAnimation__set_Color
               (CocosAnimation_o *__this,UnityEngine_Color_o CJNHFNHJHPE,MethodInfo *method)

{
  BMNKDDCJACM_o *pBVar1;
  
  pBVar1 = (__this->fields).CAOKGHKPFAE;
  if (pBVar1 != (BMNKDDCJACM_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034f81c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pBVar1->klass->vtable)._8_unknown.methodPtr)
              (pBVar1,(pBVar1->klass->vtable)._8_unknown.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(CJNHFNHJHPE.fields.r,CJNHFNHJHPE.fields.g,CJNHFNHJHPE.fields.b,CJNHFNHJHPE.fields.a);
}


// ===== public void .ctor()  [RVA 0x33F81D0]
// CocosAnimation$$.ctor @ RVA 0x33F81D0

void CocosAnimation___ctor(CocosAnimation_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_Events_UnityEvent_o **ppUVar1;
  System_Collections_Generic_List_Sprite__o *__this_01;
  System_Collections_Generic_List_Sprite__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567f9c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Sprite>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<Sprite>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
    DAT_04567f9c = 1;
    method = extraout_x1;
  }
  __this_00 = (UnityEngine_Events_UnityEvent_o *)
              thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo,method);
  UnityEngine_Events_UnityEvent___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).OnAnimationComplete;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  (__this->fields)._autoSize = true;
  __this_01 = (System_Collections_Generic_List_Sprite__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<Sprite>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<Sprite>__ctor__);
  ppSVar2 = &(__this->fields).HKCNDNBLAHI;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  (__this->fields).FIGKMEJEHGE = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public IReadOnlyList<Sprite> get_Sprites()  [RVA 0x33F829C]
// CocosAnimation$$get_Sprites @ RVA 0x33F829C

System_Collections_Generic_IReadOnlyList_Sprite__o *
CocosAnimation__get_Sprites(CocosAnimation_o *__this,MethodInfo *method)

{
  return (System_Collections_Generic_IReadOnlyList_Sprite__o *)(__this->fields).HKCNDNBLAHI;
}


// ===== public bool get_IsWork()  [RVA 0x33F82A4]
// CocosAnimation$$get_IsWork @ RVA 0x33F82A4

bool CocosAnimation__get_IsWork(CocosAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields)._JJCDMHFHJAB_k__BackingField;
}


// ===== public void set_Alpha(float CJNHFNHJHPE)  [RVA 0x33F8190]
// CocosAnimation$$set_Alpha @ RVA 0x33F8190

void CocosAnimation__set_Alpha(CocosAnimation_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  BMNKDDCJACM_o *pBVar1;
  
  pBVar1 = (__this->fields).CAOKGHKPFAE;
  if (pBVar1 != (BMNKDDCJACM_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034f81a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pBVar1->klass->vtable)._6_unknown.methodPtr)
              (pBVar1,(pBVar1->klass->vtable)._6_unknown.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_Autoplay(bool CJNHFNHJHPE)  [RVA 0x33F82AC]
// CocosAnimation$$set_Autoplay @ RVA 0x33F82AC

void CocosAnimation__set_Autoplay(CocosAnimation_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._NOAJIBNJKPE_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void Invisible()  [RVA 0x33F82B8]
// CocosAnimation$$Invisible @ RVA 0x33F82B8

void CocosAnimation__Invisible(CocosAnimation_o *__this,MethodInfo *method)

{
  BMNKDDCJACM_o *pBVar1;
  MethodInfo *extraout_x1;
  float fVar2;
  
  pBVar1 = (__this->fields).CAOKGHKPFAE;
  if (pBVar1 != (BMNKDDCJACM_o *)0x0) {
    fVar2 = (float)(*(code *)pBVar1->klass[1]._1.name)(pBVar1,pBVar1->klass[1]._1.namespaze);
    if (fVar2 == 0.0) {
      return;
    }
    pBVar1 = (__this->fields).CAOKGHKPFAE;
    method = extraout_x1;
    if (pBVar1 != (BMNKDDCJACM_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034f82fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pBVar1->klass->vtable)._6_unknown.methodPtr)
                (0,pBVar1,(pBVar1->klass->vtable)._6_unknown.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== private void DHEBEHGMBOA(int JJMCKHDALCF)  [RVA 0x33F7C3C]
// CocosAnimation$$DHEBEHGMBOA @ RVA 0x33F7C3C

void CocosAnimation__DHEBEHGMBOA(CocosAnimation_o *__this,int32_t JJMCKHDALCF,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_Sprite__o *__this_00;
  Il2CppObject *pIVar2;
  UnityEngine_Sprite_o *__this_01;
  BMNKDDCJACM_o *pBVar3;
  float fVar4;
  UnityEngine_Rect_o UVar5;
  
  if ((DAT_04567f9d & 1) == 0) {
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Sprite>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Sprite>_get_Item__);
    DAT_04567f9d = 1;
  }
  if (((__this->fields).OFNNCOJAFJB < JJMCKHDALCF) || (JJMCKHDALCF < (__this->fields).PAGAGEMKILK))
  {
    return;
  }
  __this_00 = (__this->fields).HKCNDNBLAHI;
  if (__this_00 != (System_Collections_Generic_List_Sprite__o *)0x0) {
    if ((__this_00->fields)._size < 1) {
      return;
    }
    pBVar3 = (__this->fields).CAOKGHKPFAE;
    pIVar2 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,JJMCKHDALCF,
                        Method_System_Collections_Generic_List<Sprite>_get_Item__);
    if (pBVar3 != (BMNKDDCJACM_o *)0x0) {
      (*(pBVar3->klass->vtable)._5_unknown.methodPtr)
                (pBVar3,pIVar2,(pBVar3->klass->vtable)._5_unknown.method);
      pBVar3 = (__this->fields).CAOKGHKPFAE;
      if (pBVar3 != (BMNKDDCJACM_o *)0x0) {
        (*(pBVar3->klass->vtable)._4_unknown.methodPtr)
                  (pBVar3,1,(pBVar3->klass->vtable)._4_unknown.method);
        if ((__this->fields)._autoSize == false) {
          return;
        }
        iVar1 = (__this->fields).CAFKGBHLMOI;
        if (iVar1 == 1) {
          if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_045660f4 == '\0') {
            FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
            DAT_045660f4 = '\x01';
          }
          if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          fVar4 = FGKGKDEJCOG_TypeInfo->static_fields->NADOFNLEECE;
          if (fVar4 < 1.0) {
            fVar4 = 1.0;
          }
        }
        else {
          fVar4 = 1.0;
          if (iVar1 == 0) {
            if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (DAT_04565e5d == '\0') {
              FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
              DAT_04565e5d = '\x01';
            }
            if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            fVar4 = FGKGKDEJCOG_TypeInfo->static_fields->CHCLEFKLOKH;
          }
        }
        pBVar3 = (__this->fields).CAOKGHKPFAE;
        if ((pBVar3 != (BMNKDDCJACM_o *)0x0) &&
           (__this_01 = (UnityEngine_Sprite_o *)
                        (*pBVar3->klass[1]._1.byval_arg.data)
                                  (pBVar3,*(undefined8 *)&pBVar3->klass[1]._1.byval_arg.bits),
           __this_01 != (UnityEngine_Sprite_o *)0x0)) {
          UVar5 = UnityEngine_Sprite__get_rect(__this_01,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x034f7e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pBVar3->klass->vtable)._7_unknown.methodPtr)
                    (fVar4 * UVar5.fields.m_Width,fVar4 * UVar5.fields.m_Height,pBVar3,
                     (pBVar3->klass->vtable)._7_unknown.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetFirstFrame()  [RVA 0x33F8324]
// CocosAnimation$$SetFirstFrame @ RVA 0x33F8324

void CocosAnimation__SetFirstFrame(CocosAnimation_o *__this,MethodInfo *method)

{
  int32_t JJMCKHDALCF;
  MethodInfo *in_x2;
  
  JJMCKHDALCF = (__this->fields).PAGAGEMKILK;
  (__this->fields).FIGKMEJEHGE = 1;
  (__this->fields).FJJPFEGPEFA = JJMCKHDALCF;
  CocosAnimation__DHEBEHGMBOA(__this,JJMCKHDALCF,in_x2);
  (__this->fields)._JJCDMHFHJAB_k__BackingField = true;
  (__this->fields).BJIKPLGMOMI = 0.0;
  return;
}


// ===== private void NKCPDMKJNII()  [RVA 0x33F7B9C]
// CocosAnimation$$NKCPDMKJNII @ RVA 0x33F7B9C

void CocosAnimation__NKCPDMKJNII(CocosAnimation_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  UnityEngine_Events_UnityEvent_o *__this_00;
  MethodInfo *in_x2;
  
  CocosAnimation__DHEBEHGMBOA(__this,(__this->fields).FJJPFEGPEFA,in_x2);
  iVar2 = (__this->fields).PAGAGEMKILK;
  iVar1 = (__this->fields).FIGKMEJEHGE + (__this->fields).FJJPFEGPEFA;
  (__this->fields).FJJPFEGPEFA = iVar1;
  if (((__this->fields).OFNNCOJAFJB < iVar1) || (iVar1 < iVar2)) {
    iVar1 = (__this->fields)._FEBBHCOAEMI_k__BackingField;
    (__this->fields).FJJPFEGPEFA = iVar2;
    iVar2 = iVar1 + -1;
    if (0 < iVar1) {
      (__this->fields)._FEBBHCOAEMI_k__BackingField = iVar2;
      (__this->fields)._JJCDMHFHJAB_k__BackingField = iVar2 != 0;
      if (iVar2 == 0) {
        __this_00 = (__this->fields).OnAnimationComplete;
        if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
  return;
}


// ===== public bool get_Autoplay()  [RVA 0x33F8358]
// CocosAnimation$$get_Autoplay @ RVA 0x33F8358

bool CocosAnimation__get_Autoplay(CocosAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields)._NOAJIBNJKPE_k__BackingField;
}


// ===== public void LerpAnimation01(float MMOKLAAAIPP)  [RVA 0x33F8360]
// CocosAnimation$$LerpAnimation01 @ RVA 0x33F8360

void CocosAnimation__LerpAnimation01(CocosAnimation_o *__this,float MMOKLAAAIPP,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  float fVar3;
  
  fVar3 = (float)(__this->fields)._BNKDPKMAPPM_k__BackingField;
  (__this->fields).BJIKPLGMOMI = (__this->fields)._PPEGDOHGLJJ_k__BackingField * fVar3 * MMOKLAAAIPP
  ;
  if (DAT_0456033b == '\0') {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_0456033b = '\x01';
    method = extraout_x1;
  }
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Math_TypeInfo,method);
  }
  fVar3 = fVar3 * MMOKLAAAIPP;
  iVar2 = (__this->fields).OFNNCOJAFJB;
  iVar1 = -0x80000000;
  if ((float)(int)fVar3 != INFINITY) {
    iVar1 = (int)fVar3;
  }
  iVar1 = (__this->fields).PAGAGEMKILK + iVar1;
  if (iVar2 <= iVar1) {
    iVar1 = iVar2;
  }
  (__this->fields).FJJPFEGPEFA = iVar1;
  CocosAnimation__DHEBEHGMBOA(__this,iVar1,in_x2);
  return;
}


// ===== public void set_ChangeSpriteTime(float CJNHFNHJHPE)  [RVA 0x33F840C]
// CocosAnimation$$set_ChangeSpriteTime @ RVA 0x33F840C

void CocosAnimation__set_ChangeSpriteTime
               (CocosAnimation_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._PPEGDOHGLJJ_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void Update()  [RVA 0x33F8414]
// CocosAnimation$$Update @ RVA 0x33F8414

void CocosAnimation__Update(CocosAnimation_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  float BLENDMCELBE;
  
  if ((__this->fields)._NOAJIBNJKPE_k__BackingField != false) {
    BLENDMCELBE = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    CocosAnimation__Render(__this,BLENDMCELBE,method_00);
    return;
  }
  return;
}


// ===== public void ClearSpriteResetFrames()  [RVA 0x33F8440]
// CocosAnimation$$ClearSpriteResetFrames @ RVA 0x33F8440

void CocosAnimation__ClearSpriteResetFrames(CocosAnimation_o *__this,MethodInfo *method)

{
  BMNKDDCJACM_o *pBVar1;
  
  pBVar1 = (__this->fields).CAOKGHKPFAE;
  if (pBVar1 != (BMNKDDCJACM_o *)0x0) {
    (*(pBVar1->klass->vtable)._5_unknown.methodPtr)
              (pBVar1,0,(pBVar1->klass->vtable)._5_unknown.method);
    (__this->fields).BJIKPLGMOMI = 0.0;
    (__this->fields).FJJPFEGPEFA = (__this->fields).PAGAGEMKILK;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool Init(string EIJDDKJONFO, CocosAnimation.ELBHBMFFPKK ACCIHBHMFPN, string HOHFGLOFOJG)  [RVA 0x33F8474]
// CocosAnimation$$Init @ RVA 0x33F8474

bool CocosAnimation__Init
               (CocosAnimation_o *__this,System_String_o *EIJDDKJONFO,int32_t ACCIHBHMFPN,
               System_String_o *HOHFGLOFOJG,MethodInfo *method)

{
  int32_t length;
  int iVar1;
  int iVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_Sprite_array *source;
  System_Func_TSource__bool__o *predicate;
  System_String_o *pSVar6;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  BMNKDDCJACM_o *pBVar7;
  System_Collections_Generic_List_Sprite__o *pSVar8;
  BMNKDDCJACM_o **ppBVar9;
  UnityEngine_GameObject_o **ppUVar10;
  UnityEngine_Object_o *x;
  UnityEngine_RectTransform_o **ppUVar11;
  float fVar12;
  System_Enum_o local_58;
  int32_t local_48;
  
  if ((DAT_04567f9e & 1) == 0) {
    FUN_01bab630(&Method_CocosAnimation_ALGFNMCNOIF_EHPIOCDLNEM__);
    FUN_01bab630(&CocosAnimation_ALGFNMCNOIF_TypeInfo);
    FUN_01bab630(&CocosAnimation_ELBHBMFFPKK_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<Sprite>__);
    FUN_01bab630(&System_Func<Sprite,_bool>_TypeInfo);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Sprite>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Sprite>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Sprite>_get_Count__);
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    FUN_01bab630(&StringLiteral_4336/*"Child_"*/);
    DAT_04567f9e = 1;
  }
  pIVar4 = (Il2CppObject *)thunk_FUN_01bda818(CocosAnimation_ALGFNMCNOIF_TypeInfo);
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar4 = pIVar4 + 1;
    pIVar4->klass = (Il2CppClass *)HOHFGLOFOJG;
    thunk_FUN_01c20e04(pIVar4,HOHFGLOFOJG);
    (__this->fields).CAFKGBHLMOI = ACCIHBHMFPN;
    pUVar5 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) {
      pUVar5 = (UnityEngine_RectTransform_o *)0x0;
    }
    else if (pUVar5->klass != UnityEngine_RectTransform_TypeInfo) {
      pUVar5 = (UnityEngine_RectTransform_o *)0x0;
    }
    ppUVar11 = &(__this->fields)._MPAMHJJKABE_k__BackingField;
    *ppUVar11 = pUVar5;
    thunk_FUN_01c20e04(ppUVar11);
    pSVar8 = (__this->fields).HKCNDNBLAHI;
    if (pSVar8 != (System_Collections_Generic_List_Sprite__o *)0x0) {
      length = (pSVar8->fields)._size;
      (pSVar8->fields)._size = 0;
      (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,length,(MethodInfo *)0x0);
      }
      if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      source = NGCBNMBJMOE__MMHFNAEHAKC(EIJDDKJONFO,ACCIHBHMFPN != 0,(MethodInfo *)0x0);
      if (source != (UnityEngine_Sprite_array *)0x0) {
        bVar3 = System_String__IsNullOrWhiteSpace
                          ((System_String_o *)pIVar4->klass,(MethodInfo *)0x0);
        pSVar8 = (__this->fields).HKCNDNBLAHI;
        if (!bVar3) {
          predicate = (System_Func_TSource__bool__o *)
                      thunk_FUN_01bda818(System_Func<Sprite,_bool>_TypeInfo);
          System_Func<object,_bool>___ctor();
          source = (UnityEngine_Sprite_array *)
                   System_Linq_Enumerable__Where<object>
                             ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                              Method_System_Linq_Enumerable_Where<Sprite>__);
        }
        if (pSVar8 == (System_Collections_Generic_List_Sprite__o *)0x0) goto LAB_034f8850;
        System_Collections_Generic_List<object>__AddRange
                  ((System_Collections_Generic_List_object__o *)pSVar8,
                   (System_Collections_Generic_IEnumerable_T__o *)source,
                   Method_System_Collections_Generic_List<Sprite>_AddRange__);
      }
      if ((__this->fields)._FEBBHCOAEMI_k__BackingField < 1) {
        (__this->fields)._FEBBHCOAEMI_k__BackingField = -1;
      }
      bVar3 = Util__KEJBDHBDGNI((__this->fields)._PPEGDOHGLJJ_k__BackingField,1e-10,
                                (MethodInfo *)0x0);
      if (bVar3) {
        (__this->fields)._PPEGDOHGLJJ_k__BackingField = 0.03;
      }
      pSVar8 = (__this->fields).HKCNDNBLAHI;
      if (pSVar8 != (System_Collections_Generic_List_Sprite__o *)0x0) {
        iVar1 = (pSVar8->fields)._size;
        if (iVar1 != 0) {
          ppUVar10 = &(__this->fields).KPLNDDMCNIH;
          x = (UnityEngine_Object_o *)*ppUVar10;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar3) {
            local_58.klass = (System_Enum_c *)CocosAnimation_ELBHBMFFPKK_TypeInfo;
            local_58.monitor = (void *)0xffffffffffffffff;
            local_48 = ACCIHBHMFPN;
            pSVar6 = System_Enum__ToString(&local_58,(MethodInfo *)0x0);
            pSVar6 = System_String__Concat(StringLiteral_4336/*"Child_"*/,pSVar6,(MethodInfo *)0x0);
            __this_00 = (UnityEngine_GameObject_o *)
                        thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
            UnityEngine_GameObject___ctor(__this_00,pSVar6,(MethodInfo *)0x0);
            *ppUVar10 = __this_00;
            thunk_FUN_01c20e04(ppUVar10,__this_00);
            if (*ppUVar10 == (UnityEngine_GameObject_o *)0x0) goto LAB_034f8850;
            __this_01 = UnityEngine_GameObject__get_transform(*ppUVar10,(MethodInfo *)0x0);
            parent = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (__this_01 == (UnityEngine_Transform_o *)0x0) goto LAB_034f8850;
            UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
            pBVar7 = BMNKDDCJACM__EOHMFJFFFIN
                               ((__this->fields).KPLNDDMCNIH,ACCIHBHMFPN == 0,(MethodInfo *)0x0);
            ppBVar9 = &(__this->fields).CAOKGHKPFAE;
            *ppBVar9 = pBVar7;
            thunk_FUN_01c20e04(ppBVar9,pBVar7);
            pBVar7 = *ppBVar9;
            if (pBVar7 == (BMNKDDCJACM_o *)0x0) goto LAB_034f8850;
            fVar12 = (float)(*(code *)pBVar7->klass[1]._1.name)
                                      (pBVar7,pBVar7->klass[1]._1.namespaze);
            (__this->fields).ABPCDFJHJCM = fVar12;
          }
          pSVar8 = (__this->fields).HKCNDNBLAHI;
          (__this->fields).FJJPFEGPEFA = 0;
          (__this->fields).PAGAGEMKILK = 0;
          if (pSVar8 == (System_Collections_Generic_List_Sprite__o *)0x0) goto LAB_034f8850;
          iVar2 = (pSVar8->fields)._size;
          (__this->fields)._JJCDMHFHJAB_k__BackingField = true;
          (__this->fields)._BNKDPKMAPPM_k__BackingField = iVar2;
          (__this->fields).OFNNCOJAFJB = iVar2 + -1;
        }
        return iVar1 != 0;
      }
    }
  }
LAB_034f8850:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int get_TotalFrames()  [RVA 0x33F885C]
// CocosAnimation$$get_TotalFrames @ RVA 0x33F885C

int32_t CocosAnimation__get_TotalFrames(CocosAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields)._BNKDPKMAPPM_k__BackingField;
}


// ===== public void set_RectAnchor(Vector2 CJNHFNHJHPE)  [RVA 0x33F8864]
// CocosAnimation$$set_RectAnchor @ RVA 0x33F8864

void CocosAnimation__set_RectAnchor
               (CocosAnimation_o *__this,UnityEngine_Vector2_o CJNHFNHJHPE,MethodInfo *method)

{
  BMNKDDCJACM_o *pBVar1;
  
  pBVar1 = (__this->fields).CAOKGHKPFAE;
  if (pBVar1 != (BMNKDDCJACM_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034f887c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pBVar1->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
              (pBVar1,(pBVar1->klass->vtable)._9_HNIHOIAMDPC.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(CJNHFNHJHPE.fields.x,CJNHFNHJHPE.fields.y);
}


// ===== public float get_Alpha()  [RVA 0x33F8304]
// CocosAnimation$$get_Alpha @ RVA 0x33F8304

float CocosAnimation__get_Alpha(CocosAnimation_o *__this,MethodInfo *method)

{
  BMNKDDCJACM_o *pBVar1;
  float fVar2;
  
  pBVar1 = (__this->fields).CAOKGHKPFAE;
  if (pBVar1 != (BMNKDDCJACM_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034f831c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(*(code *)pBVar1->klass[1]._1.name)(pBVar1,pBVar1->klass[1]._1.namespaze);
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

