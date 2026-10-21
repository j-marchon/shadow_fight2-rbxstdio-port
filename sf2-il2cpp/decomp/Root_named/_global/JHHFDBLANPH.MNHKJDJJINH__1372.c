// TypeDefIndex 1372
// Namespace: 
// public class JHHFDBLANPH.MNHKJDJJINH
// Fields:
//   private string NPFMOEOIEKM; // 0x10
//   private Sprite CPBJNFGMDFG; // 0x18
//   private JHHFDBLANPH.MNHKJDJJINH.FMGNNNCEHID EMPEBPJNGKP; // 0x20
//   private Vector2 JJOBECCEMMI; // 0x28
//   private bool CDHBEDHABDL; // 0x30
//   private Vector2 NPLFJBBBIBH; // 0x34

// ===== public Vector2 ACKDBDMGLAK()  [RVA 0x316F158]
// JHHFDBLANPH.MNHKJDJJINH$$ACKDBDMGLAK @ RVA 0x316F158

UnityEngine_Vector2_o
JHHFDBLANPH_MNHKJDJJINH__ACKDBDMGLAK(JHHFDBLANPH_MNHKJDJJINH_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector2_o)(__this->fields).NPLFJBBBIBH.fields;
}


// ===== public void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x316F160]
// JHHFDBLANPH.MNHKJDJJINH$$HCOCAAIGNNL @ RVA 0x316F160

void JHHFDBLANPH_MNHKJDJJINH__HCOCAAIGNNL
               (JHHFDBLANPH_MNHKJDJJINH_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).NPFMOEOIEKM = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void PLCCMPECMED()  [RVA 0x316F0C0]
// JHHFDBLANPH.MNHKJDJJINH$$PLCCMPECMED @ RVA 0x316F0C0

void JHHFDBLANPH_MNHKJDJJINH__PLCCMPECMED(JHHFDBLANPH_MNHKJDJJINH_o *__this,MethodInfo *method)

{
  if ((__this->fields).EMPEBPJNGKP != (JHHFDBLANPH_MNHKJDJJINH_FMGNNNCEHID_o *)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EABFNDGMFKD(string OOGPLJBADCD)  [RVA 0x316EFEC]
// JHHFDBLANPH.MNHKJDJJINH$$EABFNDGMFKD @ RVA 0x316EFEC

void JHHFDBLANPH_MNHKJDJJINH__EABFNDGMFKD
               (JHHFDBLANPH_MNHKJDJJINH_o *__this,System_String_o *OOGPLJBADCD,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *pSVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_0456690c & 1) == 0) {
    FUN_01bab630(&PNPPAHHCBOM_TypeInfo);
    DAT_0456690c = 1;
  }
  if (((OOGPLJBADCD == (System_String_o *)0x0) ||
      (pSVar1 = System_String__Substring
                          (OOGPLJBADCD,1,(OOGPLJBADCD->fields)._stringLength + -2,(MethodInfo *)0x0)
      , pSVar1 == (System_String_o *)0x0)) ||
     (pSVar2 = System_String__Split(pSVar1,0x2c,0,(MethodInfo *)0x0),
     pSVar2 == (System_String_array *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((int)pSVar2->max_length != 0) {
    pSVar1 = pSVar2->m_Items[0];
    if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    fVar3 = PNPPAHHCBOM__HNIHOIAMDPC(pSVar1,(MethodInfo *)0x0);
    if (1 < (uint)pSVar2->max_length) {
      fVar4 = PNPPAHHCBOM__HNIHOIAMDPC(pSVar2->m_Items[1],(MethodInfo *)0x0);
      (__this->fields).NPLFJBBBIBH.fields.x = fVar3;
      (__this->fields).NPLFJBBBIBH.fields.y = fVar4;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public void IDJNOIMDGKJ(string OOGPLJBADCD)  [RVA 0x316ED94]
// JHHFDBLANPH.MNHKJDJJINH$$IDJNOIMDGKJ @ RVA 0x316ED94

void JHHFDBLANPH_MNHKJDJJINH__IDJNOIMDGKJ
               (JHHFDBLANPH_MNHKJDJJINH_o *__this,System_String_o *OOGPLJBADCD,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *pSVar2;
  System_String_array *pSVar3;
  System_String_array *pSVar4;
  JHHFDBLANPH_MNHKJDJJINH_FMGNNNCEHID_o *pJVar5;
  JHHFDBLANPH_MNHKJDJJINH_FMGNNNCEHID_o **ppJVar6;
  
  if ((DAT_0456690d & 1) == 0) {
    FUN_01bab630(&JHHFDBLANPH_MNHKJDJJINH_FMGNNNCEHID_TypeInfo);
    DAT_0456690d = 1;
  }
  if (OOGPLJBADCD != (System_String_o *)0x0) {
    iVar1 = System_String__IndexOf(OOGPLJBADCD,0x7d,(MethodInfo *)0x0);
    pSVar2 = System_String__Substring(OOGPLJBADCD,2,iVar1 + -2,(MethodInfo *)0x0);
    if (pSVar2 != (System_String_o *)0x0) {
      pSVar3 = System_String__Split(pSVar2,0x2c,0,(MethodInfo *)0x0);
      pSVar2 = System_String__Substring
                         (OOGPLJBADCD,iVar1 + 3,((OOGPLJBADCD->fields)._stringLength - iVar1) + -5,
                          (MethodInfo *)0x0);
      if (pSVar2 != (System_String_o *)0x0) {
        pSVar4 = System_String__Split(pSVar2,0x2c,0,(MethodInfo *)0x0);
        pJVar5 = (JHHFDBLANPH_MNHKJDJJINH_FMGNNNCEHID_o *)
                 thunk_FUN_01bda818(JHHFDBLANPH_MNHKJDJJINH_FMGNNNCEHID_TypeInfo);
        System_Object___ctor((Il2CppObject *)pJVar5,(MethodInfo *)0x0);
        ppJVar6 = &(__this->fields).EMPEBPJNGKP;
        *ppJVar6 = pJVar5;
        thunk_FUN_01c20e04(ppJVar6,pJVar5);
        if (pSVar3 != (System_String_array *)0x0) {
          if ((int)pSVar3->max_length == 0) {
LAB_0326ef14:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          pJVar5 = *ppJVar6;
          iVar1 = System_Int32__Parse(pSVar3->m_Items[0],(MethodInfo *)0x0);
          if (pJVar5 != (JHHFDBLANPH_MNHKJDJJINH_FMGNNNCEHID_o *)0x0) {
            (pJVar5->fields).INIFNCOHJBN = iVar1;
            if ((uint)pSVar3->max_length < 2) goto LAB_0326ef14;
            pJVar5 = *ppJVar6;
            iVar1 = System_Int32__Parse(pSVar3->m_Items[1],(MethodInfo *)0x0);
            if ((pJVar5 != (JHHFDBLANPH_MNHKJDJJINH_FMGNNNCEHID_o *)0x0) &&
               ((pJVar5->fields).IACLMNCJFAO = iVar1, pSVar4 != (System_String_array *)0x0)) {
              if ((int)pSVar4->max_length == 0) goto LAB_0326ef14;
              pJVar5 = *ppJVar6;
              iVar1 = System_Int32__Parse(pSVar4->m_Items[0],(MethodInfo *)0x0);
              if (pJVar5 != (JHHFDBLANPH_MNHKJDJJINH_FMGNNNCEHID_o *)0x0) {
                (pJVar5->fields).BDAIJCAAMKC = iVar1;
                if ((uint)pSVar4->max_length < 2) goto LAB_0326ef14;
                pJVar5 = *ppJVar6;
                iVar1 = System_Int32__Parse(pSVar4->m_Items[1],(MethodInfo *)0x0);
                if (pJVar5 != (JHHFDBLANPH_MNHKJDJJINH_FMGNNNCEHID_o *)0x0) {
                  (pJVar5->fields).POFBPABAAJH = iVar1;
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


// ===== public void JMFIDIANAAI(string OOGPLJBADCD)  [RVA 0x316EF18]
// JHHFDBLANPH.MNHKJDJJINH$$JMFIDIANAAI @ RVA 0x316EF18

void JHHFDBLANPH_MNHKJDJJINH__JMFIDIANAAI
               (JHHFDBLANPH_MNHKJDJJINH_o *__this,System_String_o *OOGPLJBADCD,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *pSVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_0456690e & 1) == 0) {
    FUN_01bab630(&PNPPAHHCBOM_TypeInfo);
    DAT_0456690e = 1;
  }
  if (((OOGPLJBADCD == (System_String_o *)0x0) ||
      (pSVar1 = System_String__Substring
                          (OOGPLJBADCD,1,(OOGPLJBADCD->fields)._stringLength + -2,(MethodInfo *)0x0)
      , pSVar1 == (System_String_o *)0x0)) ||
     (pSVar2 = System_String__Split(pSVar1,0x2c,0,(MethodInfo *)0x0),
     pSVar2 == (System_String_array *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((int)pSVar2->max_length != 0) {
    pSVar1 = pSVar2->m_Items[0];
    if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    fVar3 = PNPPAHHCBOM__HNIHOIAMDPC(pSVar1,(MethodInfo *)0x0);
    if (1 < (uint)pSVar2->max_length) {
      fVar4 = PNPPAHHCBOM__HNIHOIAMDPC(pSVar2->m_Items[1],(MethodInfo *)0x0);
      (__this->fields).JJOBECCEMMI.fields.x = fVar3;
      (__this->fields).JJOBECCEMMI.fields.y = fVar4;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public bool HDKLEBPEEIE()  [RVA 0x316F170]
// JHHFDBLANPH.MNHKJDJJINH$$HDKLEBPEEIE @ RVA 0x316F170

bool JHHFDBLANPH_MNHKJDJJINH__HDKLEBPEEIE(JHHFDBLANPH_MNHKJDJJINH_o *__this,MethodInfo *method)

{
  return (__this->fields).CDHBEDHABDL;
}


// ===== public void .ctor()  [RVA 0x316ED8C]
// JHHFDBLANPH.MNHKJDJJINH$$.ctor @ RVA 0x316ED8C

void JHHFDBLANPH_MNHKJDJJINH___ctor(JHHFDBLANPH_MNHKJDJJINH_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public JHHFDBLANPH.MNHKJDJJINH.FMGNNNCEHID PPJHCILAIMN()  [RVA 0x316F178]
// JHHFDBLANPH.MNHKJDJJINH$$PPJHCILAIMN @ RVA 0x316F178

JHHFDBLANPH_MNHKJDJJINH_FMGNNNCEHID_o *
JHHFDBLANPH_MNHKJDJJINH__PPJHCILAIMN(JHHFDBLANPH_MNHKJDJJINH_o *__this,MethodInfo *method)

{
  return (__this->fields).EMPEBPJNGKP;
}


// ===== public Vector2 BNIPHCLHLMP()  [RVA 0x316F180]
// JHHFDBLANPH.MNHKJDJJINH$$BNIPHCLHLMP @ RVA 0x316F180

UnityEngine_Vector2_o
JHHFDBLANPH_MNHKJDJJINH__BNIPHCLHLMP(JHHFDBLANPH_MNHKJDJJINH_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector2_o)(__this->fields).JJOBECCEMMI.fields;
}


// ===== public void NBEIAKDNNPE(Sprite CJNHFNHJHPE)  [RVA 0x316F188]
// JHHFDBLANPH.MNHKJDJJINH$$NBEIAKDNNPE @ RVA 0x316F188

void JHHFDBLANPH_MNHKJDJJINH__NBEIAKDNNPE
               (JHHFDBLANPH_MNHKJDJJINH_o *__this,UnityEngine_Sprite_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields).CPBJNFGMDFG = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x316F190]
// JHHFDBLANPH.MNHKJDJJINH$$KCHJCGEMCGE @ RVA 0x316F190

System_String_o *
JHHFDBLANPH_MNHKJDJJINH__KCHJCGEMCGE(JHHFDBLANPH_MNHKJDJJINH_o *__this,MethodInfo *method)

{
  return (__this->fields).NPFMOEOIEKM;
}


// ===== public Sprite KCBACMMPHLJ()  [RVA 0x316F198]
// JHHFDBLANPH.MNHKJDJJINH$$KCBACMMPHLJ @ RVA 0x316F198

UnityEngine_Sprite_o *
JHHFDBLANPH_MNHKJDJJINH__KCBACMMPHLJ(JHHFDBLANPH_MNHKJDJJINH_o *__this,MethodInfo *method)

{
  return (__this->fields).CPBJNFGMDFG;
}


// ===== public void OGIJKENGDPM(bool CJNHFNHJHPE)  [RVA 0x316F1A0]
// JHHFDBLANPH.MNHKJDJJINH$$OGIJKENGDPM @ RVA 0x316F1A0

void JHHFDBLANPH_MNHKJDJJINH__OGIJKENGDPM
               (JHHFDBLANPH_MNHKJDJJINH_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).CDHBEDHABDL = CJNHFNHJHPE;
  return;
}

