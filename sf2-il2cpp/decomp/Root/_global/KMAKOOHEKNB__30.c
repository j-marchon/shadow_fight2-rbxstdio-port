// TypeDefIndex 30
// Namespace: 
// public class KMAKOOHEKNB
// Fields:
//   private float[] PKGBBMMLPKM; // 0x10
//   private float[] OECOHAFDPLH; // 0x18
//   public int JDHLILCAAIL; // 0x20
//   private float KPGBDEPEHJD; // 0x24

// ===== public float IPNKNBDBKMA(Range CMHCEEPDACF)  [RVA 0x2FF6DA8]
// KMAKOOHEKNB$$IPNKNBDBKMA @ RVA 0x2FF6DA8

float KMAKOOHEKNB__IPNKNBDBKMA
                (KMAKOOHEKNB_o *__this,UnityEngine_SocialPlatforms_Range_o CMHCEEPDACF,
                MethodInfo *method)

{
  int JDEFJPHCNMM;
  float fVar1;
  float fVar2;
  
  if (CMHCEEPDACF.fields.count != 0) {
    JDEFJPHCNMM = CMHCEEPDACF.fields.from + -1;
                    /* try { // try from 030f6dc0 to 031f6dc3 has its CatchHandler @ 030f6edc */
    fVar1 = KMAKOOHEKNB__GOFGJILDJLA(__this,JDEFJPHCNMM + CMHCEEPDACF.fields.count,method);
                    /* try { // try from 030f6dcc to 031f6ddb has its CatchHandler @ 030f6ed8 */
    fVar2 = KMAKOOHEKNB__GOFGJILDJLA(__this,JDEFJPHCNMM,method);
                    /* try { // try from 030f6de0 to 031f6deb has its CatchHandler @ 030f6ed4 */
    return fVar1 - fVar2;
  }
  return 0.0;
}


// ===== public float IFLGBNFHDIG()  [RVA 0x2FF6EFC]
// KMAKOOHEKNB$$IFLGBNFHDIG @ RVA 0x2FF6EFC

float KMAKOOHEKNB__IFLGBNFHDIG(KMAKOOHEKNB_o *__this,MethodInfo *method)

{
  return (__this->fields).KPGBDEPEHJD;
}


// ===== public float HGJGLBLDDHF(int JDEFJPHCNMM)  [RVA 0x2FF6F04]
// KMAKOOHEKNB$$HGJGLBLDDHF @ RVA 0x2FF6F04

float KMAKOOHEKNB__HGJGLBLDDHF(KMAKOOHEKNB_o *__this,int32_t JDEFJPHCNMM,MethodInfo *method)

{
  System_Single_array *pSVar1;
  float fVar2;
  
  if (JDEFJPHCNMM < 0) {
                    /* try { // try from 030f6f2c to 031f6f37 has its CatchHandler @ 030f6f4c */
    fVar2 = 0.0;
  }
  else {
                    /* try { // try from 030f6f0c to 031f6f0f has its CatchHandler @ 030f6f20 */
    pSVar1 = (__this->fields).PKGBBMMLPKM;
    if (pSVar1 == (System_Single_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 030f6f38 to 031f6f43 has its CatchHandler @ 030f6cf8 */
      FUN_01bab8c8();
    }
    if ((uint)pSVar1->max_length <= (uint)JDEFJPHCNMM) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
                    /* catch() { ... } // from try @ 030f6f0c with catch @ 030f6f20 */
    fVar2 = pSVar1->m_Items[(uint)JDEFJPHCNMM];
  }
  return fVar2;
}


// ===== public void .ctor()  [RVA 0x2FF6F40]
// KMAKOOHEKNB$$.ctor @ RVA 0x2FF6F40

void KMAKOOHEKNB___ctor(KMAKOOHEKNB_o *__this,MethodInfo *method)

{
                    /* try { // try from 030f6f44 to 031f6f4b has its CatchHandler @ 030f6f4c */
  (__this->fields).JDHLILCAAIL = -1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 030f6f2c with catch @ 030f6f4c
                       catch(type#2 @ 00000000) { ... } // from try @ 030f6f44 with catch @ 030f6f4c
                        */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public int IBLCNILBAHE()  [RVA 0x2FF6F50]
// KMAKOOHEKNB$$IBLCNILBAHE @ RVA 0x2FF6F50

int32_t KMAKOOHEKNB__IBLCNILBAHE(KMAKOOHEKNB_o *__this,MethodInfo *method)

{
  System_Single_array *pSVar1;
  
                    /* try { // try from 030f6f50 to 031f6f8f has its CatchHandler @ 030f6f50
                       catch() { ... } // from try @ 030f6f50 with catch @ 030f6f50
                       catch() { ... } // from try @ 030f6fcc with catch @ 030f6f50
                       catch() { ... } // from try @ 030f7008 with catch @ 030f6f50
                       catch() { ... } // from try @ 030f7054 with catch @ 030f6f50 */
  pSVar1 = (__this->fields).PKGBBMMLPKM;
  if (pSVar1 != (System_Single_array *)0x0) {
    return (int32_t)pSVar1->max_length;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CECCCGNLKFN(int DFIBGGDJPLM)  [RVA 0x2FF6F6C]
// KMAKOOHEKNB$$CECCCGNLKFN @ RVA 0x2FF6F6C

void KMAKOOHEKNB__CECCCGNLKFN(KMAKOOHEKNB_o *__this,int32_t DFIBGGDJPLM,MethodInfo *method)

{
  System_Single_array *pSVar1;
  System_Single_array **ppSVar2;
  
                    /* try { // try from 030f6f90 to 031f6f9f has its CatchHandler @ 030f700c */
  if ((DAT_04565aa7 & 1) == 0) {
    FUN_01bab630(&float___TypeInfo);
                    /* try { // try from 030f6fa0 to 031f6fa7 has its CatchHandler @ 030f7008 */
    DAT_04565aa7 = 1;
  }
  (__this->fields).JDHLILCAAIL = -1;
  pSVar1 = (System_Single_array *)FUN_01bab718(float___TypeInfo,DFIBGGDJPLM);
                    /* try { // try from 030f6fc0 to 031f6fcb has its CatchHandler @ 030f7010 */
  (__this->fields).PKGBBMMLPKM = pSVar1;
  thunk_FUN_01c20e04();
                    /* try { // try from 030f6fcc to 031f7003 has its CatchHandler @ 030f6f50 */
  pSVar1 = (System_Single_array *)FUN_01bab718(float___TypeInfo,DFIBGGDJPLM);
  ppSVar2 = &(__this->fields).OECOHAFDPLH;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}


// ===== public void NEHGDABENGG(float CJNHFNHJHPE)  [RVA 0x2FF6FF4]
// KMAKOOHEKNB$$NEHGDABENGG @ RVA 0x2FF6FF4

void KMAKOOHEKNB__NEHGDABENGG(KMAKOOHEKNB_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).KPGBDEPEHJD = CJNHFNHJHPE;
  return;
}


// ===== public void FIPNKCMHCLE(float PGFAIJMMOHJ, int JDEFJPHCNMM)  [RVA 0x2FF6FFC]
// KMAKOOHEKNB$$FIPNKCMHCLE @ RVA 0x2FF6FFC

void KMAKOOHEKNB__FIPNKCMHCLE
               (KMAKOOHEKNB_o *__this,float PGFAIJMMOHJ,int32_t JDEFJPHCNMM,MethodInfo *method)

{
  uint uVar1;
  System_Single_array *pSVar2;
  
                    /* try { // try from 030f7004 to 031f7007 has its CatchHandler @ 030f7010 */
  if (0.0 < PGFAIJMMOHJ) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f6fa0 with catch @ 030f7008
                       try { // try from 030f7008 to 031f7027 has its CatchHandler @ 030f6f50 */
    pSVar2 = (__this->fields).PKGBBMMLPKM;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f6f90 with catch @ 030f700c
                        */
    if (pSVar2 == (System_Single_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f6fc0 with catch @ 030f7010
                       catch(type#1 @ 03f99f68) { ... } // from try @ 030f7004 with catch @ 030f7010
                        */
    uVar1 = (uint)pSVar2->max_length;
    if (JDEFJPHCNMM < (int)uVar1) {
      if (uVar1 <= (uint)JDEFJPHCNMM) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      pSVar2->m_Items[JDEFJPHCNMM] = PGFAIJMMOHJ;
    }
  }
                    /* try { // try from 030f7028 to 031f702b has its CatchHandler @ 030f703c */
  return;
}


// ===== public float GOFGJILDJLA(int JDEFJPHCNMM)  [RVA 0x2FF6DF8]
// KMAKOOHEKNB$$GOFGJILDJLA @ RVA 0x2FF6DF8

float KMAKOOHEKNB__GOFGJILDJLA(KMAKOOHEKNB_o *__this,int32_t JDEFJPHCNMM,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  System_Single_array *pSVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  System_Single_array *pSVar7;
  float *pfVar8;
  uint uVar9;
  float fVar10;
  
  if (JDEFJPHCNMM < 0) {
    fVar10 = 0.0;
                    /* try { // try from 030f6ea8 to 031f6eab has its CatchHandler @ 030f6ef4 */
  }
  else {
    iVar2 = (__this->fields).JDHLILCAAIL;
    lVar6 = (long)iVar2;
    pSVar3 = (__this->fields).OECOHAFDPLH;
    if (iVar2 < JDEFJPHCNMM) {
      pSVar7 = (__this->fields).PKGBBMMLPKM;
      lVar5 = 0;
      pfVar8 = pSVar3->m_Items + lVar6 + 1;
      do {
        iVar4 = (int)lVar5;
        if (pSVar7 == (System_Single_array *)0x0) {
LAB_030f6ee8:
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f6d50 with catch @ 030f6ee4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f6ecc with catch @ 030f6ee8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f6eac with catch @ 030f6eec
                        */
          (__this->fields).JDHLILCAAIL = iVar2 + iVar4 + 1;
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f6e44 with catch @ 030f6ef0
                        */
          FUN_01bab8c8();
        }
        uVar9 = iVar2 + iVar4 + 1;
                    /* try { // try from 030f6e44 to 031f6e63 has its CatchHandler @ 030f6ef0 */
        if ((uint)pSVar7->max_length <= uVar9) {
LAB_030f6ecc:
                    /* try { // try from 030f6ecc to 031f6ed3 has its CatchHandler @ 030f6ee8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f6de0 with catch @ 030f6ed4
                       try { // try from 030f6ed4 to 031f6f0b has its CatchHandler @ 030f6cf8 */
          (__this->fields).JDHLILCAAIL = iVar2 + iVar4 + 1;
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f6dcc with catch @ 030f6ed8
                        */
          FUN_01bab8d0();
        }
        if (pSVar3 == (System_Single_array *)0x0) goto LAB_030f6ee8;
        uVar1 = (uint)pSVar3->max_length;
        if (uVar1 <= uVar9) goto LAB_030f6ecc;
        fVar10 = pSVar7->m_Items[lVar6 + lVar5 + 1];
        *pfVar8 = fVar10;
                    /* try { // try from 030f6e64 to 031f6ea7 has its CatchHandler @ 030f6cf8 */
        if (-1 < lVar6 + lVar5) {
          fVar10 = fVar10 + (__this->fields).KPGBDEPEHJD;
          *pfVar8 = fVar10;
          if (uVar1 <= (uint)(iVar2 + iVar4)) goto LAB_030f6ecc;
          *pfVar8 = fVar10 + pfVar8[-1];
        }
        lVar5 = lVar5 + 1;
        pfVar8 = pfVar8 + 1;
      } while ((lVar6 - (ulong)(uint)JDEFJPHCNMM) + lVar5 != 0);
      (__this->fields).JDHLILCAAIL = JDEFJPHCNMM;
    }
    else {
                    /* try { // try from 030f6eac to 031f6ebf has its CatchHandler @ 030f6eec */
      if (pSVar3 == (System_Single_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    if ((uint)pSVar3->max_length <= (uint)JDEFJPHCNMM) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f6ea8 with catch @ 030f6ef4
                        */
      FUN_01bab8d0();
    }
                    /* try { // try from 030f6ec0 to 031f6ec7 has its CatchHandler @ 030f6cf8 */
    fVar10 = pSVar3->m_Items[JDEFJPHCNMM];
  }
                    /* try { // try from 030f6ec8 to 031f6ecb has its CatchHandler @ 030f6ee0 */
  return fVar10;
}


// ===== public int MJFHIMIOOHO()  [RVA 0x2FF7038]
// KMAKOOHEKNB$$MJFHIMIOOHO @ RVA 0x2FF7038

int32_t KMAKOOHEKNB__MJFHIMIOOHO(KMAKOOHEKNB_o *__this,MethodInfo *method)

{
  System_Single_array *pSVar1;
  
                    /* catch() { ... } // from try @ 030f7028 with catch @ 030f703c */
  pSVar1 = (__this->fields).OECOHAFDPLH;
  if (pSVar1 != (System_Single_array *)0x0) {
                    /* try { // try from 030f7048 to 031f7053 has its CatchHandler @ 030f7068 */
    return (int32_t)pSVar1->max_length;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

