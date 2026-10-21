// TypeDefIndex 3025
// Namespace: 
// public class BIDBHCDLLHH
// Fields:
//   private string DEKCPPOJFEH; // 0x10
//   private IEFEBEDLHNN[] DIMDJNDKCBG; // 0x18

// ===== public string KCHJCGEMCGE()  [RVA 0x34B3654]
// BIDBHCDLLHH$$KCHJCGEMCGE @ RVA 0x34B3654

System_String_o * BIDBHCDLLHH__KCHJCGEMCGE(BIDBHCDLLHH_o *__this,MethodInfo *method)

{
  return (__this->fields).DEKCPPOJFEH;
}


// ===== public void JIPBODHMDBB(IEFEBEDLHNN CJNHFNHJHPE)  [RVA 0x34B365C]
// BIDBHCDLLHH$$JIPBODHMDBB @ RVA 0x34B365C

void BIDBHCDLLHH__JIPBODHMDBB(BIDBHCDLLHH_o *__this,IEFEBEDLHNN_o *CJNHFNHJHPE,MethodInfo *method)

{
  long lVar1;
  undefined8 uVar2;
  IEFEBEDLHNN_array *pIVar3;
  
  pIVar3 = (__this->fields).DIMDJNDKCBG;
  if (pIVar3 == (IEFEBEDLHNN_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((CJNHFNHJHPE != (IEFEBEDLHNN_o *)0x0) &&
     (lVar1 = thunk_FUN_01bda71c(CJNHFNHJHPE,(((pIVar3->obj).klass)->_1).element_class), lVar1 == 0)
     ) {
    uVar2 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar2,0);
  }
  if (1 < (uint)pIVar3->max_length) {
    pIVar3->m_Items[1] = CJNHFNHJHPE;
    thunk_FUN_01c20e04(pIVar3->m_Items + 1,CJNHFNHJHPE);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public IEFEBEDLHNN HDCIDHFLJKA()  [RVA 0x34B36C0]
// BIDBHCDLLHH$$HDCIDHFLJKA @ RVA 0x34B36C0

IEFEBEDLHNN_o * BIDBHCDLLHH__HDCIDHFLJKA(BIDBHCDLLHH_o *__this,MethodInfo *method)

{
  IEFEBEDLHNN_array *pIVar1;
  
  pIVar1 = (__this->fields).DIMDJNDKCBG;
  if (pIVar1 == (IEFEBEDLHNN_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (1 < (uint)pIVar1->max_length) {
    return pIVar1->m_Items[1];
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public void .ctor(BIDBHCDLLHH CCIEBILKFCF)  [RVA 0x34B36EC]
// BIDBHCDLLHH$$.ctor @ RVA 0x34B36EC

void BIDBHCDLLHH___ctor(BIDBHCDLLHH_o *__this,BIDBHCDLLHH_o *CCIEBILKFCF,MethodInfo *method)

{
  IEFEBEDLHNN_array *pIVar1;
  long lVar2;
  undefined8 uVar3;
  IEFEBEDLHNN_array **ppIVar4;
  IEFEBEDLHNN_array *pIVar5;
  IEFEBEDLHNN_o *pIVar6;
  
  if ((DAT_0456856f & 1) == 0) {
    FUN_01bab630(&IEFEBEDLHNN___TypeInfo);
    DAT_0456856f = 1;
  }
  pIVar1 = (IEFEBEDLHNN_array *)FUN_01bab718(IEFEBEDLHNN___TypeInfo,3);
  ppIVar4 = &(__this->fields).DIMDJNDKCBG;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((CCIEBILKFCF != (BIDBHCDLLHH_o *)0x0) &&
     (pIVar1 = (CCIEBILKFCF->fields).DIMDJNDKCBG, pIVar1 != (IEFEBEDLHNN_array *)0x0)) {
    if ((int)pIVar1->max_length == 0) goto LAB_035b386c;
    pIVar5 = *ppIVar4;
    if (pIVar5 != (IEFEBEDLHNN_array *)0x0) {
      pIVar6 = pIVar1->m_Items[0];
      if ((pIVar6 != (IEFEBEDLHNN_o *)0x0) &&
         (lVar2 = thunk_FUN_01bda71c(pIVar6,(((pIVar5->obj).klass)->_1).element_class), lVar2 == 0))
      {
LAB_035b3870:
        uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar3,0);
      }
      if ((int)pIVar5->max_length != 0) {
        pIVar5->m_Items[0] = pIVar6;
        thunk_FUN_01c20e04(pIVar5->m_Items,pIVar6);
        pIVar1 = (CCIEBILKFCF->fields).DIMDJNDKCBG;
        if (pIVar1 == (IEFEBEDLHNN_array *)0x0) goto LAB_035b3868;
        if (1 < (uint)pIVar1->max_length) {
          pIVar5 = *ppIVar4;
          if (pIVar5 == (IEFEBEDLHNN_array *)0x0) goto LAB_035b3868;
          pIVar6 = pIVar1->m_Items[1];
          if ((pIVar6 != (IEFEBEDLHNN_o *)0x0) &&
             (lVar2 = thunk_FUN_01bda71c(pIVar6,(((pIVar5->obj).klass)->_1).element_class),
             lVar2 == 0)) goto LAB_035b3870;
          if (1 < (uint)pIVar5->max_length) {
            pIVar5->m_Items[1] = pIVar6;
            thunk_FUN_01c20e04(pIVar5->m_Items + 1,pIVar6);
            pIVar1 = (CCIEBILKFCF->fields).DIMDJNDKCBG;
            if (pIVar1 == (IEFEBEDLHNN_array *)0x0) goto LAB_035b3868;
            if (2 < (uint)pIVar1->max_length) {
              pIVar5 = *ppIVar4;
              if (pIVar5 == (IEFEBEDLHNN_array *)0x0) goto LAB_035b3868;
              pIVar6 = pIVar1->m_Items[2];
              if ((pIVar6 != (IEFEBEDLHNN_o *)0x0) &&
                 (lVar2 = thunk_FUN_01bda71c(pIVar6,(((pIVar5->obj).klass)->_1).element_class),
                 lVar2 == 0)) goto LAB_035b3870;
              if (2 < (uint)pIVar5->max_length) {
                pIVar5->m_Items[2] = pIVar6;
                thunk_FUN_01c20e04(pIVar5->m_Items + 2,pIVar6);
                (__this->fields).DEKCPPOJFEH = (CCIEBILKFCF->fields).DEKCPPOJFEH;
                thunk_FUN_01c20e04(&__this->fields);
                return;
              }
            }
          }
        }
      }
LAB_035b386c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_035b3868:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DDAIJAGNCNC()  [RVA 0x34B387C]
// BIDBHCDLLHH$$DDAIJAGNCNC @ RVA 0x34B387C

void BIDBHCDLLHH__DDAIJAGNCNC(BIDBHCDLLHH_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void LDNLMFODLOG()  [RVA 0x34B3880]
// BIDBHCDLLHH$$LDNLMFODLOG @ RVA 0x34B3880

void BIDBHCDLLHH__LDNLMFODLOG(BIDBHCDLLHH_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void .ctor(IEFEBEDLHNN FLGDFENHMKM, IEFEBEDLHNN JEKJCJEOEBG, IEFEBEDLHNN MGEDBHMONNP, string KGLJICLJHEL)  [RVA 0x34B3884]
// BIDBHCDLLHH$$.ctor @ RVA 0x34B3884

void BIDBHCDLLHH___ctor(BIDBHCDLLHH_o *__this,IEFEBEDLHNN_o *FLGDFENHMKM,IEFEBEDLHNN_o *JEKJCJEOEBG,
                       IEFEBEDLHNN_o *MGEDBHMONNP,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  IEFEBEDLHNN_array *pIVar1;
  long lVar2;
  undefined8 uVar3;
  IEFEBEDLHNN_array **ppIVar4;
  
  if ((DAT_04568570 & 1) == 0) {
    FUN_01bab630(&IEFEBEDLHNN___TypeInfo);
    DAT_04568570 = 1;
  }
  pIVar1 = (IEFEBEDLHNN_array *)FUN_01bab718(IEFEBEDLHNN___TypeInfo,3);
  ppIVar4 = &(__this->fields).DIMDJNDKCBG;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pIVar1 = *ppIVar4;
  if (pIVar1 != (IEFEBEDLHNN_array *)0x0) {
    if ((FLGDFENHMKM != (IEFEBEDLHNN_o *)0x0) &&
       (lVar2 = thunk_FUN_01bda71c(FLGDFENHMKM,(((pIVar1->obj).klass)->_1).element_class),
       lVar2 == 0)) {
LAB_035b39d4:
      uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar3,0);
    }
    if ((int)pIVar1->max_length != 0) {
      pIVar1->m_Items[0] = FLGDFENHMKM;
      thunk_FUN_01c20e04(pIVar1->m_Items,FLGDFENHMKM);
      pIVar1 = *ppIVar4;
      if (pIVar1 == (IEFEBEDLHNN_array *)0x0) goto LAB_035b39cc;
      if ((JEKJCJEOEBG != (IEFEBEDLHNN_o *)0x0) &&
         (lVar2 = thunk_FUN_01bda71c(JEKJCJEOEBG,(((pIVar1->obj).klass)->_1).element_class),
         lVar2 == 0)) goto LAB_035b39d4;
      if (1 < (uint)pIVar1->max_length) {
        pIVar1->m_Items[1] = JEKJCJEOEBG;
        thunk_FUN_01c20e04(pIVar1->m_Items + 1,JEKJCJEOEBG);
        pIVar1 = *ppIVar4;
        if (pIVar1 == (IEFEBEDLHNN_array *)0x0) goto LAB_035b39cc;
        if ((MGEDBHMONNP != (IEFEBEDLHNN_o *)0x0) &&
           (lVar2 = thunk_FUN_01bda71c(MGEDBHMONNP,(((pIVar1->obj).klass)->_1).element_class),
           lVar2 == 0)) goto LAB_035b39d4;
        if (2 < (uint)pIVar1->max_length) {
          pIVar1->m_Items[2] = MGEDBHMONNP;
          thunk_FUN_01c20e04(pIVar1->m_Items + 2,MGEDBHMONNP);
          (__this->fields).DEKCPPOJFEH = KGLJICLJHEL;
          thunk_FUN_01c20e04(&__this->fields,KGLJICLJHEL);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_035b39cc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x34B39E0]
// BIDBHCDLLHH$$HCOCAAIGNNL @ RVA 0x34B39E0

void BIDBHCDLLHH__HCOCAAIGNNL(BIDBHCDLLHH_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).DEKCPPOJFEH = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void LIDMHDKNIFI(IEFEBEDLHNN CJNHFNHJHPE)  [RVA 0x34B39E8]
// BIDBHCDLLHH$$LIDMHDKNIFI @ RVA 0x34B39E8

void BIDBHCDLLHH__LIDMHDKNIFI(BIDBHCDLLHH_o *__this,IEFEBEDLHNN_o *CJNHFNHJHPE,MethodInfo *method)

{
  long lVar1;
  undefined8 uVar2;
  IEFEBEDLHNN_array *pIVar3;
  
  pIVar3 = (__this->fields).DIMDJNDKCBG;
  if (pIVar3 == (IEFEBEDLHNN_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((CJNHFNHJHPE != (IEFEBEDLHNN_o *)0x0) &&
     (lVar1 = thunk_FUN_01bda71c(CJNHFNHJHPE,(((pIVar3->obj).klass)->_1).element_class), lVar1 == 0)
     ) {
    uVar2 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar2,0);
  }
  if (2 < (uint)pIVar3->max_length) {
    pIVar3->m_Items[2] = CJNHFNHJHPE;
    thunk_FUN_01c20e04(pIVar3->m_Items + 2,CJNHFNHJHPE);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public IEFEBEDLHNN BIBMBNBONAH()  [RVA 0x34B3A4C]
// BIDBHCDLLHH$$BIBMBNBONAH @ RVA 0x34B3A4C

IEFEBEDLHNN_o * BIDBHCDLLHH__BIBMBNBONAH(BIDBHCDLLHH_o *__this,MethodInfo *method)

{
  IEFEBEDLHNN_array *pIVar1;
  
  pIVar1 = (__this->fields).DIMDJNDKCBG;
  if (pIVar1 == (IEFEBEDLHNN_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((int)pIVar1->max_length != 0) {
                    /* try { // try from 035b3a64 to 036b3baf has its CatchHandler @ 035b3a64
                       catch() { ... } // from try @ 035b3a64 with catch @ 035b3a64
                       catch() { ... } // from try @ 035b3bd0 with catch @ 035b3a64
                       catch() { ... } // from try @ 035b3c18 with catch @ 035b3a64
                       catch() { ... } // from try @ 035b3c40 with catch @ 035b3a64
                       catch() { ... } // from try @ 035b3c70 with catch @ 035b3a64 */
    return pIVar1->m_Items[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public IEFEBEDLHNN EHFDMBIJJGB()  [RVA 0x34B3A74]
// BIDBHCDLLHH$$EHFDMBIJJGB @ RVA 0x34B3A74

IEFEBEDLHNN_o * BIDBHCDLLHH__EHFDMBIJJGB(BIDBHCDLLHH_o *__this,MethodInfo *method)

{
  IEFEBEDLHNN_array *pIVar1;
  
  pIVar1 = (__this->fields).DIMDJNDKCBG;
  if (pIVar1 == (IEFEBEDLHNN_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (2 < (uint)pIVar1->max_length) {
    return pIVar1->m_Items[2];
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public void KIAOELALKBL(BIDBHCDLLHH AFBFJDLMPAH)  [RVA 0x34B3AA0]
// BIDBHCDLLHH$$KIAOELALKBL @ RVA 0x34B3AA0

void BIDBHCDLLHH__KIAOELALKBL(BIDBHCDLLHH_o *__this,BIDBHCDLLHH_o *AFBFJDLMPAH,MethodInfo *method)

{
  IEFEBEDLHNN_o *pIVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  IEFEBEDLHNN_array *pIVar2;
  IEFEBEDLHNN_o *pIVar3;
  
  pIVar2 = (__this->fields).DIMDJNDKCBG;
  if (pIVar2 != (IEFEBEDLHNN_array *)0x0) {
    if ((int)pIVar2->max_length == 0) goto LAB_035b3b58;
    if (AFBFJDLMPAH != (BIDBHCDLLHH_o *)0x0) {
      pIVar3 = pIVar2->m_Items[0];
      pIVar1 = BIDBHCDLLHH__BIBMBNBONAH(AFBFJDLMPAH,(MethodInfo *)AFBFJDLMPAH);
      if (pIVar3 != (IEFEBEDLHNN_o *)0x0) {
        IEFEBEDLHNN__KIAOELALKBL(pIVar3,pIVar1,(MethodInfo *)0x0);
        pIVar2 = (__this->fields).DIMDJNDKCBG;
        if (pIVar2 != (IEFEBEDLHNN_array *)0x0) {
          if ((uint)pIVar2->max_length < 2) {
LAB_035b3b58:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          pIVar3 = pIVar2->m_Items[1];
          pIVar1 = BIDBHCDLLHH__HDCIDHFLJKA(AFBFJDLMPAH,method_00);
          if (pIVar3 != (IEFEBEDLHNN_o *)0x0) {
            IEFEBEDLHNN__KIAOELALKBL(pIVar3,pIVar1,(MethodInfo *)0x0);
            pIVar2 = (__this->fields).DIMDJNDKCBG;
            if (pIVar2 != (IEFEBEDLHNN_array *)0x0) {
              if ((uint)pIVar2->max_length < 3) goto LAB_035b3b58;
              pIVar3 = pIVar2->m_Items[2];
              pIVar1 = BIDBHCDLLHH__EHFDMBIJJGB(AFBFJDLMPAH,method_01);
              if (pIVar3 != (IEFEBEDLHNN_o *)0x0) {
                IEFEBEDLHNN__KIAOELALKBL(pIVar3,pIVar1,(MethodInfo *)0x0);
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


// ===== public void .ctor()  [RVA 0x34B3B5C]
// BIDBHCDLLHH$$.ctor @ RVA 0x34B3B5C

void BIDBHCDLLHH___ctor(BIDBHCDLLHH_o *__this,MethodInfo *method)

{
  IEFEBEDLHNN_array *pIVar1;
  IEFEBEDLHNN_o *pIVar2;
  long lVar3;
  undefined8 uVar4;
  IEFEBEDLHNN_array **ppIVar5;
  
  if ((DAT_04568571 & 1) == 0) {
    FUN_01bab630(&IEFEBEDLHNN___TypeInfo);
    FUN_01bab630(&IEFEBEDLHNN_TypeInfo);
                    /* try { // try from 035b3bb0 to 036b3bb7 has its CatchHandler @ 035b3c24 */
    FUN_01bab630(&StringLiteral_21526/*"tmp"*/);
    DAT_04568571 = 1;
  }
                    /* try { // try from 035b3bc4 to 036b3bcf has its CatchHandler @ 035b3c20 */
  pIVar1 = (IEFEBEDLHNN_array *)FUN_01bab718(IEFEBEDLHNN___TypeInfo,3);
  ppIVar5 = &(__this->fields).DIMDJNDKCBG;
  *ppIVar5 = pIVar1;
                    /* try { // try from 035b3bd0 to 036b3c13 has its CatchHandler @ 035b3a64 */
  thunk_FUN_01c20e04(ppIVar5,pIVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pIVar1 = *ppIVar5;
  pIVar2 = (IEFEBEDLHNN_o *)thunk_FUN_01bda818(IEFEBEDLHNN_TypeInfo);
  IEFEBEDLHNN___ctor(pIVar2,StringLiteral_21526/*"tmp"*/,(MethodInfo *)0x0);
  if (pIVar1 != (IEFEBEDLHNN_array *)0x0) {
                    /* try { // try from 035b3c14 to 036b3c17 has its CatchHandler @ 035b3c1c */
                    /* try { // try from 035b3c18 to 036b3c3b has its CatchHandler @ 035b3a64 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b3c14 with catch @ 035b3c1c
                        */
    if ((pIVar2 != (IEFEBEDLHNN_o *)0x0) &&
       (lVar3 = thunk_FUN_01bda71c(pIVar2,(((pIVar1->obj).klass)->_1).element_class), lVar3 == 0)) {
LAB_035b3cf4:
      uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar4,0);
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b3bc4 with catch @ 035b3c20
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b3bb0 with catch @ 035b3c24
                        */
    if ((int)pIVar1->max_length != 0) {
      pIVar1->m_Items[0] = pIVar2;
      thunk_FUN_01c20e04(pIVar1->m_Items,pIVar2);
                    /* try { // try from 035b3c3c to 036b3c3f has its CatchHandler @ 035b3c60 */
      pIVar1 = *ppIVar5;
                    /* try { // try from 035b3c40 to 036b3c67 has its CatchHandler @ 035b3a64 */
      pIVar2 = (IEFEBEDLHNN_o *)thunk_FUN_01bda818(IEFEBEDLHNN_TypeInfo);
      IEFEBEDLHNN___ctor(pIVar2,StringLiteral_21526/*"tmp"*/,(MethodInfo *)0x0);
      if (pIVar1 == (IEFEBEDLHNN_array *)0x0) goto LAB_035b3cec;
                    /* catch() { ... } // from try @ 035b3c3c with catch @ 035b3c60 */
                    /* try { // try from 035b3c68 to 036b3c6f has its CatchHandler @ 035b3c84 */
      if ((pIVar2 != (IEFEBEDLHNN_o *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pIVar2,(((pIVar1->obj).klass)->_1).element_class), lVar3 == 0))
      goto LAB_035b3cf4;
                    /* try { // try from 035b3c70 to 036b3c7b has its CatchHandler @ 035b3a64 */
      if (1 < (uint)pIVar1->max_length) {
                    /* try { // try from 035b3c7c to 036b3c83 has its CatchHandler @ 035b3c84 */
        pIVar1->m_Items[1] = pIVar2;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035b3c68 with catch @ 035b3c84
                       catch(type#2 @ 00000000) { ... } // from try @ 035b3c7c with catch @ 035b3c84
                        */
        thunk_FUN_01c20e04(pIVar1->m_Items + 1,pIVar2);
        pIVar1 = *ppIVar5;
        pIVar2 = (IEFEBEDLHNN_o *)thunk_FUN_01bda818(IEFEBEDLHNN_TypeInfo);
        IEFEBEDLHNN___ctor(pIVar2,StringLiteral_21526/*"tmp"*/,(MethodInfo *)0x0);
        if (pIVar1 == (IEFEBEDLHNN_array *)0x0) goto LAB_035b3cec;
        if ((pIVar2 != (IEFEBEDLHNN_o *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(pIVar2,(((pIVar1->obj).klass)->_1).element_class), lVar3 == 0
           )) goto LAB_035b3cf4;
        if (2 < (uint)pIVar1->max_length) {
          pIVar1->m_Items[2] = pIVar2;
          thunk_FUN_01c20e04(pIVar1->m_Items + 2,pIVar2);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_035b3cec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void LPOMFJHFDEC(IEFEBEDLHNN CJNHFNHJHPE)  [RVA 0x34B3D00]
// BIDBHCDLLHH$$LPOMFJHFDEC @ RVA 0x34B3D00

void BIDBHCDLLHH__LPOMFJHFDEC(BIDBHCDLLHH_o *__this,IEFEBEDLHNN_o *CJNHFNHJHPE,MethodInfo *method)

{
  long lVar1;
  undefined8 uVar2;
  IEFEBEDLHNN_array *pIVar3;
  
  pIVar3 = (__this->fields).DIMDJNDKCBG;
  if (pIVar3 == (IEFEBEDLHNN_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((CJNHFNHJHPE != (IEFEBEDLHNN_o *)0x0) &&
     (lVar1 = thunk_FUN_01bda71c(CJNHFNHJHPE,(((pIVar3->obj).klass)->_1).element_class), lVar1 == 0)
     ) {
    uVar2 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar2,0);
  }
  if ((int)pIVar3->max_length != 0) {
    pIVar3->m_Items[0] = CJNHFNHJHPE;
    thunk_FUN_01c20e04(pIVar3->m_Items,CJNHFNHJHPE);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

