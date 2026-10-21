// Original name: Nekki.SF2.Core.Fights.Model.Components.Figures.Triangle  (obfuscated BIDBHCDLLHH)
// TypeDefIndex 3025
// Namespace: 
// public class Triangle
// Fields:
//   private string DEKCPPOJFEH; // 0x10
//   private ModelNode[] DIMDJNDKCBG; // 0x18

// ===== public string KCHJCGEMCGE()  [RVA 0x34B3654]
// Triangle$$KCHJCGEMCGE @ RVA 0x34B3654

System_String_o * Triangle__KCHJCGEMCGE(Triangle_o *__this,MethodInfo *method)

{
  return (__this->fields).DEKCPPOJFEH;
}


// ===== public void JIPBODHMDBB(ModelNode CJNHFNHJHPE)  [RVA 0x34B365C]
// Triangle$$JIPBODHMDBB @ RVA 0x34B365C

void Triangle__JIPBODHMDBB(Triangle_o *__this,ModelNode_o *CJNHFNHJHPE,MethodInfo *method)

{
  long lVar1;
  undefined8 uVar2;
  ModelNode_array *pIVar3;
  
  pIVar3 = (__this->fields).DIMDJNDKCBG;
  if (pIVar3 == (ModelNode_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((CJNHFNHJHPE != (ModelNode_o *)0x0) &&
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


// ===== public ModelNode HDCIDHFLJKA()  [RVA 0x34B36C0]
// Triangle$$HDCIDHFLJKA @ RVA 0x34B36C0

ModelNode_o * Triangle__HDCIDHFLJKA(Triangle_o *__this,MethodInfo *method)

{
  ModelNode_array *pIVar1;
  
  pIVar1 = (__this->fields).DIMDJNDKCBG;
  if (pIVar1 == (ModelNode_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (1 < (uint)pIVar1->max_length) {
    return pIVar1->m_Items[1];
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public void .ctor(Triangle CCIEBILKFCF)  [RVA 0x34B36EC]
// Triangle$$.ctor @ RVA 0x34B36EC

void Triangle___ctor(Triangle_o *__this,Triangle_o *CCIEBILKFCF,MethodInfo *method)

{
  ModelNode_array *pIVar1;
  long lVar2;
  undefined8 uVar3;
  ModelNode_array **ppIVar4;
  ModelNode_array *pIVar5;
  ModelNode_o *pIVar6;
  
  if ((DAT_0456856f & 1) == 0) {
    FUN_01bab630(&ModelNode___TypeInfo);
    DAT_0456856f = 1;
  }
  pIVar1 = (ModelNode_array *)FUN_01bab718(ModelNode___TypeInfo,3);
  ppIVar4 = &(__this->fields).DIMDJNDKCBG;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((CCIEBILKFCF != (Triangle_o *)0x0) &&
     (pIVar1 = (CCIEBILKFCF->fields).DIMDJNDKCBG, pIVar1 != (ModelNode_array *)0x0)) {
    if ((int)pIVar1->max_length == 0) goto LAB_035b386c;
    pIVar5 = *ppIVar4;
    if (pIVar5 != (ModelNode_array *)0x0) {
      pIVar6 = pIVar1->m_Items[0];
      if ((pIVar6 != (ModelNode_o *)0x0) &&
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
        if (pIVar1 == (ModelNode_array *)0x0) goto LAB_035b3868;
        if (1 < (uint)pIVar1->max_length) {
          pIVar5 = *ppIVar4;
          if (pIVar5 == (ModelNode_array *)0x0) goto LAB_035b3868;
          pIVar6 = pIVar1->m_Items[1];
          if ((pIVar6 != (ModelNode_o *)0x0) &&
             (lVar2 = thunk_FUN_01bda71c(pIVar6,(((pIVar5->obj).klass)->_1).element_class),
             lVar2 == 0)) goto LAB_035b3870;
          if (1 < (uint)pIVar5->max_length) {
            pIVar5->m_Items[1] = pIVar6;
            thunk_FUN_01c20e04(pIVar5->m_Items + 1,pIVar6);
            pIVar1 = (CCIEBILKFCF->fields).DIMDJNDKCBG;
            if (pIVar1 == (ModelNode_array *)0x0) goto LAB_035b3868;
            if (2 < (uint)pIVar1->max_length) {
              pIVar5 = *ppIVar4;
              if (pIVar5 == (ModelNode_array *)0x0) goto LAB_035b3868;
              pIVar6 = pIVar1->m_Items[2];
              if ((pIVar6 != (ModelNode_o *)0x0) &&
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
// Triangle$$DDAIJAGNCNC @ RVA 0x34B387C

void Triangle__DDAIJAGNCNC(Triangle_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void LDNLMFODLOG()  [RVA 0x34B3880]
// Triangle$$LDNLMFODLOG @ RVA 0x34B3880

void Triangle__LDNLMFODLOG(Triangle_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void .ctor(ModelNode FLGDFENHMKM, ModelNode JEKJCJEOEBG, ModelNode MGEDBHMONNP, string KGLJICLJHEL)  [RVA 0x34B3884]
// Triangle$$.ctor @ RVA 0x34B3884

void Triangle___ctor(Triangle_o *__this,ModelNode_o *FLGDFENHMKM,ModelNode_o *JEKJCJEOEBG,
                       ModelNode_o *MGEDBHMONNP,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  ModelNode_array *pIVar1;
  long lVar2;
  undefined8 uVar3;
  ModelNode_array **ppIVar4;
  
  if ((DAT_04568570 & 1) == 0) {
    FUN_01bab630(&ModelNode___TypeInfo);
    DAT_04568570 = 1;
  }
  pIVar1 = (ModelNode_array *)FUN_01bab718(ModelNode___TypeInfo,3);
  ppIVar4 = &(__this->fields).DIMDJNDKCBG;
  *ppIVar4 = pIVar1;
  thunk_FUN_01c20e04(ppIVar4,pIVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pIVar1 = *ppIVar4;
  if (pIVar1 != (ModelNode_array *)0x0) {
    if ((FLGDFENHMKM != (ModelNode_o *)0x0) &&
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
      if (pIVar1 == (ModelNode_array *)0x0) goto LAB_035b39cc;
      if ((JEKJCJEOEBG != (ModelNode_o *)0x0) &&
         (lVar2 = thunk_FUN_01bda71c(JEKJCJEOEBG,(((pIVar1->obj).klass)->_1).element_class),
         lVar2 == 0)) goto LAB_035b39d4;
      if (1 < (uint)pIVar1->max_length) {
        pIVar1->m_Items[1] = JEKJCJEOEBG;
        thunk_FUN_01c20e04(pIVar1->m_Items + 1,JEKJCJEOEBG);
        pIVar1 = *ppIVar4;
        if (pIVar1 == (ModelNode_array *)0x0) goto LAB_035b39cc;
        if ((MGEDBHMONNP != (ModelNode_o *)0x0) &&
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
// Triangle$$HCOCAAIGNNL @ RVA 0x34B39E0

void Triangle__HCOCAAIGNNL(Triangle_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).DEKCPPOJFEH = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void LIDMHDKNIFI(ModelNode CJNHFNHJHPE)  [RVA 0x34B39E8]
// Triangle$$LIDMHDKNIFI @ RVA 0x34B39E8

void Triangle__LIDMHDKNIFI(Triangle_o *__this,ModelNode_o *CJNHFNHJHPE,MethodInfo *method)

{
  long lVar1;
  undefined8 uVar2;
  ModelNode_array *pIVar3;
  
  pIVar3 = (__this->fields).DIMDJNDKCBG;
  if (pIVar3 == (ModelNode_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((CJNHFNHJHPE != (ModelNode_o *)0x0) &&
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


// ===== public ModelNode BIBMBNBONAH()  [RVA 0x34B3A4C]
// Triangle$$BIBMBNBONAH @ RVA 0x34B3A4C

ModelNode_o * Triangle__BIBMBNBONAH(Triangle_o *__this,MethodInfo *method)

{
  ModelNode_array *pIVar1;
  
  pIVar1 = (__this->fields).DIMDJNDKCBG;
  if (pIVar1 == (ModelNode_array *)0x0) {
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


// ===== public ModelNode EHFDMBIJJGB()  [RVA 0x34B3A74]
// Triangle$$EHFDMBIJJGB @ RVA 0x34B3A74

ModelNode_o * Triangle__EHFDMBIJJGB(Triangle_o *__this,MethodInfo *method)

{
  ModelNode_array *pIVar1;
  
  pIVar1 = (__this->fields).DIMDJNDKCBG;
  if (pIVar1 == (ModelNode_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (2 < (uint)pIVar1->max_length) {
    return pIVar1->m_Items[2];
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public void KIAOELALKBL(Triangle AFBFJDLMPAH)  [RVA 0x34B3AA0]
// Triangle$$KIAOELALKBL @ RVA 0x34B3AA0

void Triangle__KIAOELALKBL(Triangle_o *__this,Triangle_o *AFBFJDLMPAH,MethodInfo *method)

{
  ModelNode_o *pIVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  ModelNode_array *pIVar2;
  ModelNode_o *pIVar3;
  
  pIVar2 = (__this->fields).DIMDJNDKCBG;
  if (pIVar2 != (ModelNode_array *)0x0) {
    if ((int)pIVar2->max_length == 0) goto LAB_035b3b58;
    if (AFBFJDLMPAH != (Triangle_o *)0x0) {
      pIVar3 = pIVar2->m_Items[0];
      pIVar1 = Triangle__BIBMBNBONAH(AFBFJDLMPAH,(MethodInfo *)AFBFJDLMPAH);
      if (pIVar3 != (ModelNode_o *)0x0) {
        ModelNode__KIAOELALKBL(pIVar3,pIVar1,(MethodInfo *)0x0);
        pIVar2 = (__this->fields).DIMDJNDKCBG;
        if (pIVar2 != (ModelNode_array *)0x0) {
          if ((uint)pIVar2->max_length < 2) {
LAB_035b3b58:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          pIVar3 = pIVar2->m_Items[1];
          pIVar1 = Triangle__HDCIDHFLJKA(AFBFJDLMPAH,method_00);
          if (pIVar3 != (ModelNode_o *)0x0) {
            ModelNode__KIAOELALKBL(pIVar3,pIVar1,(MethodInfo *)0x0);
            pIVar2 = (__this->fields).DIMDJNDKCBG;
            if (pIVar2 != (ModelNode_array *)0x0) {
              if ((uint)pIVar2->max_length < 3) goto LAB_035b3b58;
              pIVar3 = pIVar2->m_Items[2];
              pIVar1 = Triangle__EHFDMBIJJGB(AFBFJDLMPAH,method_01);
              if (pIVar3 != (ModelNode_o *)0x0) {
                ModelNode__KIAOELALKBL(pIVar3,pIVar1,(MethodInfo *)0x0);
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
// Triangle$$.ctor @ RVA 0x34B3B5C

void Triangle___ctor(Triangle_o *__this,MethodInfo *method)

{
  ModelNode_array *pIVar1;
  ModelNode_o *pIVar2;
  long lVar3;
  undefined8 uVar4;
  ModelNode_array **ppIVar5;
  
  if ((DAT_04568571 & 1) == 0) {
    FUN_01bab630(&ModelNode___TypeInfo);
    FUN_01bab630(&ModelNode_TypeInfo);
                    /* try { // try from 035b3bb0 to 036b3bb7 has its CatchHandler @ 035b3c24 */
    FUN_01bab630(&StringLiteral_21526/*"tmp"*/);
    DAT_04568571 = 1;
  }
                    /* try { // try from 035b3bc4 to 036b3bcf has its CatchHandler @ 035b3c20 */
  pIVar1 = (ModelNode_array *)FUN_01bab718(ModelNode___TypeInfo,3);
  ppIVar5 = &(__this->fields).DIMDJNDKCBG;
  *ppIVar5 = pIVar1;
                    /* try { // try from 035b3bd0 to 036b3c13 has its CatchHandler @ 035b3a64 */
  thunk_FUN_01c20e04(ppIVar5,pIVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pIVar1 = *ppIVar5;
  pIVar2 = (ModelNode_o *)thunk_FUN_01bda818(ModelNode_TypeInfo);
  ModelNode___ctor(pIVar2,StringLiteral_21526/*"tmp"*/,(MethodInfo *)0x0);
  if (pIVar1 != (ModelNode_array *)0x0) {
                    /* try { // try from 035b3c14 to 036b3c17 has its CatchHandler @ 035b3c1c */
                    /* try { // try from 035b3c18 to 036b3c3b has its CatchHandler @ 035b3a64 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b3c14 with catch @ 035b3c1c
                        */
    if ((pIVar2 != (ModelNode_o *)0x0) &&
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
      pIVar2 = (ModelNode_o *)thunk_FUN_01bda818(ModelNode_TypeInfo);
      ModelNode___ctor(pIVar2,StringLiteral_21526/*"tmp"*/,(MethodInfo *)0x0);
      if (pIVar1 == (ModelNode_array *)0x0) goto LAB_035b3cec;
                    /* catch() { ... } // from try @ 035b3c3c with catch @ 035b3c60 */
                    /* try { // try from 035b3c68 to 036b3c6f has its CatchHandler @ 035b3c84 */
      if ((pIVar2 != (ModelNode_o *)0x0) &&
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
        pIVar2 = (ModelNode_o *)thunk_FUN_01bda818(ModelNode_TypeInfo);
        ModelNode___ctor(pIVar2,StringLiteral_21526/*"tmp"*/,(MethodInfo *)0x0);
        if (pIVar1 == (ModelNode_array *)0x0) goto LAB_035b3cec;
        if ((pIVar2 != (ModelNode_o *)0x0) &&
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


// ===== public void LPOMFJHFDEC(ModelNode CJNHFNHJHPE)  [RVA 0x34B3D00]
// Triangle$$LPOMFJHFDEC @ RVA 0x34B3D00

void Triangle__LPOMFJHFDEC(Triangle_o *__this,ModelNode_o *CJNHFNHJHPE,MethodInfo *method)

{
  long lVar1;
  undefined8 uVar2;
  ModelNode_array *pIVar3;
  
  pIVar3 = (__this->fields).DIMDJNDKCBG;
  if (pIVar3 == (ModelNode_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((CJNHFNHJHPE != (ModelNode_o *)0x0) &&
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

