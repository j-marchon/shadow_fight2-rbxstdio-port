// TypeDefIndex 3321
// Namespace: Nekki.SF2.GUI.Fight
// public class PointsTable : MonoBehaviour
// Fields:
//   private int OHAPNGPPJPH; // 0x20
//   private int CMJNPCKLMLM; // 0x24
//   private Vector2 HPJPFIPOFAO; // 0x28
//   private LabelAlias leftScoreText; // 0x30
//   private LabelAlias delimiterText; // 0x38
//   private LabelAlias rightScoreText; // 0x40
//   private BGMKDONJFPI <GMPAEDFIIHF>k__BackingField; // 0x48

// ===== public void .ctor()  [RVA 0x3529828]
// Nekki.SF2.GUI.Fight.PointsTable$$.ctor @ RVA 0x3529828

void Nekki_SF2_GUI_Fight_PointsTable___ctor
               (Nekki_SF2_GUI_Fight_PointsTable_o *__this,MethodInfo *method)

{
  (__this->fields).HPJPFIPOFAO.fields = (UnityEngine_Vector2_Fields)0x4348000043480000;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void GNLPNKGBAFL(BGMKDONJFPI CJNHFNHJHPE)  [RVA 0x352983C]
// Nekki.SF2.GUI.Fight.PointsTable$$GNLPNKGBAFL @ RVA 0x352983C

void Nekki_SF2_GUI_Fight_PointsTable__GNLPNKGBAFL
               (Nekki_SF2_GUI_Fight_PointsTable_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._GMPAEDFIIHF_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public int get_LeftScore()  [RVA 0x3529844]
// Nekki.SF2.GUI.Fight.PointsTable$$get_LeftScore @ RVA 0x3529844

int32_t Nekki_SF2_GUI_Fight_PointsTable__get_LeftScore
                  (Nekki_SF2_GUI_Fight_PointsTable_o *__this,MethodInfo *method)

{
  return (__this->fields).OHAPNGPPJPH;
}


// ===== public BGMKDONJFPI get_Type()  [RVA 0x352984C]
// Nekki.SF2.GUI.Fight.PointsTable$$get_Type @ RVA 0x352984C

int32_t Nekki_SF2_GUI_Fight_PointsTable__get_Type
                  (Nekki_SF2_GUI_Fight_PointsTable_o *__this,MethodInfo *method)

{
  return (__this->fields)._GMPAEDFIIHF_k__BackingField;
}


// ===== public void set_LeftScore(int CJNHFNHJHPE)  [RVA 0x3529854]
// Nekki.SF2.GUI.Fight.PointsTable$$set_LeftScore @ RVA 0x3529854

void Nekki_SF2_GUI_Fight_PointsTable__set_LeftScore
               (Nekki_SF2_GUI_Fight_PointsTable_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  int32_t *piVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  
  if ((DAT_04568a11 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568a11 = 1;
  }
  piVar3 = &(__this->fields).OHAPNGPPJPH;
  if (*piVar3 != CJNHFNHJHPE) {
    pNVar4 = (__this->fields).leftScoreText;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar4 = (__this->fields).leftScoreText;
      (__this->fields).OHAPNGPPJPH = CJNHFNHJHPE;
      pSVar2 = System_Int32__ToString((int32_t)piVar3,(MethodInfo *)0x0);
      if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03629900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
                  (pNVar4,pSVar2,(pNVar4->klass->vtable)._75_set_text.method);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== public void set_RightScore(int CJNHFNHJHPE)  [RVA 0x3529918]
// Nekki.SF2.GUI.Fight.PointsTable$$set_RightScore @ RVA 0x3529918

void Nekki_SF2_GUI_Fight_PointsTable__set_RightScore
               (Nekki_SF2_GUI_Fight_PointsTable_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  int32_t *piVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  
  if ((DAT_04568a12 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568a12 = 1;
  }
  piVar3 = &(__this->fields).CMJNPCKLMLM;
  if (*piVar3 != CJNHFNHJHPE) {
    pNVar4 = (__this->fields).rightScoreText;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar4 = (__this->fields).rightScoreText;
      (__this->fields).CMJNPCKLMLM = CJNHFNHJHPE;
      pSVar2 = System_Int32__ToString((int32_t)piVar3,(MethodInfo *)0x0);
      if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036299c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
                  (pNVar4,pSVar2,(pNVar4->klass->vtable)._75_set_text.method);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== public int get_RightScore()  [RVA 0x35299DC]
// Nekki.SF2.GUI.Fight.PointsTable$$get_RightScore @ RVA 0x35299DC

int32_t Nekki_SF2_GUI_Fight_PointsTable__get_RightScore
                  (Nekki_SF2_GUI_Fight_PointsTable_o *__this,MethodInfo *method)

{
  return (__this->fields).CMJNPCKLMLM;
}


// ===== public void Init(BGMKDONJFPI ACCIHBHMFPN, int FLHLGFGJDMH = 0, int NJBICBHLOMO = 120)  [RVA 0x35299E4]
// Nekki.SF2.GUI.Fight.PointsTable$$Init @ RVA 0x35299E4

void Nekki_SF2_GUI_Fight_PointsTable__Init
               (Nekki_SF2_GUI_Fight_PointsTable_o *__this,int32_t ACCIHBHMFPN,int32_t FLHLGFGJDMH,
               int32_t NJBICBHLOMO,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  int32_t local_24;
  
  local_24 = FLHLGFGJDMH;
  if ((DAT_04568a13 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1492/*"/"*/,ACCIHBHMFPN,FLHLGFGJDMH,NJBICBHLOMO);
    FUN_01bab630(&StringLiteral_2086/*":"*/);
    DAT_04568a13 = 1;
  }
  (__this->fields)._GMPAEDFIIHF_k__BackingField = ACCIHBHMFPN;
  iVar1 = (int)__this;
  if (ACCIHBHMFPN == 1) {
    pNVar3 = (__this->fields).leftScoreText;
    pSVar2 = System_Int32__ToString(iVar1 + 0x20,(MethodInfo *)0x0);
    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                (pNVar3,pSVar2,(pNVar3->klass->vtable)._75_set_text.method);
      pNVar3 = (__this->fields).rightScoreText;
      pSVar2 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
      if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                  (pNVar3,pSVar2,(pNVar3->klass->vtable)._75_set_text.method);
        pNVar3 = (__this->fields).delimiterText;
        if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                    (pNVar3,StringLiteral_1492/*"/"*/,(pNVar3->klass->vtable)._75_set_text.method);
          return;
        }
      }
    }
  }
  else {
    if (ACCIHBHMFPN != 0) {
      return;
    }
    pNVar3 = (__this->fields).leftScoreText;
    pSVar2 = System_Int32__ToString(iVar1 + 0x20,(MethodInfo *)0x0);
    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                (pNVar3,pSVar2,(pNVar3->klass->vtable)._75_set_text.method);
      pNVar3 = (__this->fields).rightScoreText;
      pSVar2 = System_Int32__ToString(iVar1 + 0x24,(MethodInfo *)0x0);
      if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                  (pNVar3,pSVar2,(pNVar3->klass->vtable)._75_set_text.method);
        pNVar3 = (__this->fields).delimiterText;
        if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03629abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                    (pNVar3,StringLiteral_2086/*":"*/,(pNVar3->klass->vtable)._75_set_text.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

