// TypeDefIndex 2693
// Namespace: 
// public class DNELIPCHKLK
// Fields:
//   private string GDPFBDIJNHA; // 0x10
//   private string GJFJPLHCBKJ; // 0x18
//   private string ANOPJEEGOLJ; // 0x20
//   private string NANIFEMFPJP; // 0x28

// ===== public bool LFHPFJOAJIO(DNELIPCHKLK DBIAAJNKHLH)  [RVA 0x33CCF74]
// DNELIPCHKLK$$LFHPFJOAJIO @ RVA 0x33CCF74

bool DNELIPCHKLK__LFHPFJOAJIO(DNELIPCHKLK_o *__this,DNELIPCHKLK_o *DBIAAJNKHLH,MethodInfo *method)

{
  bool bVar1;
  System_String_o *b;
  System_String_o *a;
  
  if (DBIAAJNKHLH != (DNELIPCHKLK_o *)0x0) {
    b = (System_String_o *)
        (*(DBIAAJNKHLH->klass->vtable)._3_ToString.methodPtr)
                  (DBIAAJNKHLH,(DBIAAJNKHLH->klass->vtable)._3_ToString.method);
    a = (System_String_o *)
        (*(__this->klass->vtable)._3_ToString.methodPtr)
                  (__this,(__this->klass->vtable)._3_ToString.method);
    bVar1 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool IPFJNBLGFOE(string BHHBEIACGPB, string BANHBMINMMP)  [RVA 0x33CCFEC]
// DNELIPCHKLK$$IPFJNBLGFOE @ RVA 0x33CCFEC

bool DNELIPCHKLK__IPFJNBLGFOE
               (DNELIPCHKLK_o *__this,System_String_o *BHHBEIACGPB,System_String_o *BANHBMINMMP,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__op_Equality(BHHBEIACGPB,(__this->fields).GDPFBDIJNHA,(MethodInfo *)0x0);
  if (bVar1) {
                    /* try { // try from 034cd024 to 035cd04f has its CatchHandler @ 034cd1e0 */
    bVar1 = System_String__op_Equality(BANHBMINMMP,(__this->fields).GJFJPLHCBKJ,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// ===== public bool JBCKLNNLKMG()  [RVA 0x33CD03C]
// DNELIPCHKLK$$JBCKLNNLKMG @ RVA 0x33CD03C

bool DNELIPCHKLK__JBCKLNNLKMG(DNELIPCHKLK_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).GDPFBDIJNHA,(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).GJFJPLHCBKJ,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// ===== public void FABCBOLKOCC(string BHHBEIACGPB, string BANHBMINMMP, string MHOFCOHFCGL)  [RVA 0x33CD070]
// DNELIPCHKLK$$FABCBOLKOCC @ RVA 0x33CD070

void DNELIPCHKLK__FABCBOLKOCC
               (DNELIPCHKLK_o *__this,System_String_o *BHHBEIACGPB,System_String_o *BANHBMINMMP,
               System_String_o *MHOFCOHFCGL,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *method_00;
  
                    /* try { // try from 034cd08c to 035cd093 has its CatchHandler @ 034cd1dc */
                    /* try { // try from 034cd09c to 035cd0bb has its CatchHandler @ 034cd1e8 */
  if ((DAT_04567e30 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567e30 = 1;
  }
                    /* try { // try from 034cd0bc to 035cd1af has its CatchHandler @ 034ccee8 */
  pSVar1 = StringLiteral_1/*""*/;
  if (BHHBEIACGPB != (System_String_o *)0x0) {
    pSVar1 = BHHBEIACGPB;
  }
  if (__this != (DNELIPCHKLK_o *)0x0) {
    (__this->fields).GDPFBDIJNHA = pSVar1;
    thunk_FUN_01c20e04();
    pSVar1 = StringLiteral_1/*""*/;
    if (BANHBMINMMP != (System_String_o *)0x0) {
      pSVar1 = BANHBMINMMP;
    }
    (__this->fields).GJFJPLHCBKJ = pSVar1;
    thunk_FUN_01c20e04();
    pSVar1 = StringLiteral_1/*""*/;
    if (MHOFCOHFCGL != (System_String_o *)0x0) {
      pSVar1 = MHOFCOHFCGL;
    }
    (__this->fields).ANOPJEEGOLJ = pSVar1;
    thunk_FUN_01c20e04();
    DNELIPCHKLK__EMIGGAINFCC(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string EFEGPIFJICL()  [RVA 0x33CD248]
// DNELIPCHKLK$$EFEGPIFJICL @ RVA 0x33CD248

System_String_o * DNELIPCHKLK__EFEGPIFJICL(DNELIPCHKLK_o *__this,MethodInfo *method)

{
  return (__this->fields).GJFJPLHCBKJ;
}


// ===== public void .ctor(string DBIAAJNKHLH)  [RVA 0x33CD250]
// DNELIPCHKLK$$.ctor @ RVA 0x33CD250

void DNELIPCHKLK___ctor(DNELIPCHKLK_o *__this,System_String_o *DBIAAJNKHLH,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  DNELIPCHKLK__LGOFNFEIKFB(__this,DBIAAJNKHLH,method);
  return;
}


// ===== public void .ctor(string BHHBEIACGPB, string BANHBMINMMP, string MHOFCOHFCGL)  [RVA 0x33CD384]
// DNELIPCHKLK$$.ctor @ RVA 0x33CD384

void DNELIPCHKLK___ctor(DNELIPCHKLK_o *__this,System_String_o *BHHBEIACGPB,
                       System_String_o *BANHBMINMMP,System_String_o *MHOFCOHFCGL,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  DNELIPCHKLK__FABCBOLKOCC(__this,BHHBEIACGPB,BANHBMINMMP,MHOFCOHFCGL,method);
  return;
}


// ===== public void .ctor(DNELIPCHKLK PBDMBCJNKII)  [RVA 0x33CD3C8]
// DNELIPCHKLK$$.ctor @ RVA 0x33CD3C8

void DNELIPCHKLK___ctor(DNELIPCHKLK_o *__this,DNELIPCHKLK_o *PBDMBCJNKII,MethodInfo *method)

{
  MethodInfo *in_x4;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (PBDMBCJNKII != (DNELIPCHKLK_o *)0x0) {
    DNELIPCHKLK__FABCBOLKOCC
              (__this,(PBDMBCJNKII->fields).GDPFBDIJNHA,(PBDMBCJNKII->fields).GJFJPLHCBKJ,
               (PBDMBCJNKII->fields).ANOPJEEGOLJ,in_x4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool IPFJNBLGFOE(string DBIAAJNKHLH)  [RVA 0x33CD400]
// DNELIPCHKLK$$IPFJNBLGFOE @ RVA 0x33CD400

bool DNELIPCHKLK__IPFJNBLGFOE(DNELIPCHKLK_o *__this,System_String_o *DBIAAJNKHLH,MethodInfo *method)

{
  System_String_o **ppSVar1;
  int iVar2;
  System_String_o **ppSVar3;
  bool bVar4;
  System_String_array *pSVar5;
  MethodInfo *method_00;
  
  if ((DAT_04567e31 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567e31 = 1;
  }
  if (DBIAAJNKHLH != (System_String_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    pSVar5 = System_String__Split(DBIAAJNKHLH,0x7c,0,(MethodInfo *)0x0);
    if (pSVar5 != (System_String_array *)0x0) {
      iVar2 = (int)pSVar5->max_length;
      ppSVar1 = (System_String_o **)&StringLiteral_1/*""*/;
      if (iVar2 != 1) {
        ppSVar1 = pSVar5->m_Items + 1;
      }
      ppSVar3 = pSVar5->m_Items;
      if (iVar2 < 1) {
        ppSVar1 = (System_String_o **)&StringLiteral_1/*""*/;
        ppSVar3 = (System_String_o **)&StringLiteral_1/*""*/;
      }
      bVar4 = DNELIPCHKLK__IPFJNBLGFOE(__this,*ppSVar3,*ppSVar1,method_00);
      return bVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool LFHPFJOAJIO(string BHHBEIACGPB, string BANHBMINMMP, string MHOFCOHFCGL)  [RVA 0x33CD490]
// DNELIPCHKLK$$LFHPFJOAJIO @ RVA 0x33CD490

bool DNELIPCHKLK__LFHPFJOAJIO
               (DNELIPCHKLK_o *__this,System_String_o *BHHBEIACGPB,System_String_o *BANHBMINMMP,
               System_String_o *MHOFCOHFCGL,MethodInfo *method)

{
  bool bVar1;
  
  if (BHHBEIACGPB != (System_String_o *)0x0) {
    bVar1 = System_String__Equals(BHHBEIACGPB,(__this->fields).GDPFBDIJNHA,(MethodInfo *)0x0);
    if (!bVar1) {
      return false;
    }
    if (BANHBMINMMP != (System_String_o *)0x0) {
      bVar1 = System_String__Equals(BANHBMINMMP,(__this->fields).GJFJPLHCBKJ,(MethodInfo *)0x0);
      if (!bVar1) {
        return false;
      }
      if (MHOFCOHFCGL != (System_String_o *)0x0) {
        bVar1 = System_String__Equals(MHOFCOHFCGL,(__this->fields).ANOPJEEGOLJ,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override string ToString()  [RVA 0x33CD508]
// DNELIPCHKLK$$ToString @ RVA 0x33CD508

System_String_o * DNELIPCHKLK__ToString(DNELIPCHKLK_o *__this,MethodInfo *method)

{
  return (__this->fields).NANIFEMFPJP;
}


// ===== public string IGILFMIPEIM()  [RVA 0x33CD510]
// DNELIPCHKLK$$IGILFMIPEIM @ RVA 0x33CD510

System_String_o * DNELIPCHKLK__IGILFMIPEIM(DNELIPCHKLK_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04567e32 & 1) == 0) {
    FUN_01bab630(&StringLiteral_22485/*"|"*/);
    DAT_04567e32 = 1;
  }
  pSVar1 = System_String__Concat
                     ((__this->fields).GDPFBDIJNHA,StringLiteral_22485/*"|"*/,(__this->fields).GJFJPLHCBKJ,
                      (MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void LGOFNFEIKFB(string CJNHFNHJHPE)  [RVA 0x33CD27C]
// DNELIPCHKLK$$LGOFNFEIKFB @ RVA 0x33CD27C

void DNELIPCHKLK__LGOFNFEIKFB(DNELIPCHKLK_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  int iVar1;
  System_String_array *pSVar2;
  MethodInfo *method_00;
  System_String_o **ppSVar3;
  
                    /* try { // try from 034cd280 to 035cd28b has its CatchHandler @ 034ccee8 */
                    /* try { // try from 034cd28c to 035cd293 has its CatchHandler @ 034cd294 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034cd218 with catch @ 034cd294
                       catch(type#2 @ 00000000) { ... } // from try @ 034cd28c with catch @ 034cd294
                        */
  if ((DAT_04567e33 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567e33 = 1;
  }
  if (CJNHFNHJHPE == (System_String_o *)0x0) {
    return;
  }
  pSVar2 = System_String__Split(CJNHFNHJHPE,0x7c,0,(MethodInfo *)0x0);
  if (pSVar2 == (System_String_array *)0x0) {
LAB_034cd37c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar1 = (int)pSVar2->max_length;
  ppSVar3 = pSVar2->m_Items;
  if (iVar1 < 1) {
    ppSVar3 = (System_String_o **)&StringLiteral_1/*""*/;
  }
  if (__this == (DNELIPCHKLK_o *)0x0) goto LAB_034cd37c;
  (__this->fields).GDPFBDIJNHA = *ppSVar3;
  thunk_FUN_01c20e04();
  if (iVar1 < 2) {
    ppSVar3 = (System_String_o **)&StringLiteral_1/*""*/;
  }
  else {
    if ((uint)pSVar2->max_length < 2) goto LAB_034cd380;
    ppSVar3 = pSVar2->m_Items + 1;
  }
  (__this->fields).GJFJPLHCBKJ = *ppSVar3;
  thunk_FUN_01c20e04();
  if (iVar1 < 3) {
    ppSVar3 = (System_String_o **)&StringLiteral_1/*""*/;
  }
  else {
    if ((uint)pSVar2->max_length < 3) {
LAB_034cd380:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    ppSVar3 = pSVar2->m_Items + 2;
  }
  (__this->fields).ANOPJEEGOLJ = *ppSVar3;
  thunk_FUN_01c20e04();
  DNELIPCHKLK__EMIGGAINFCC(__this,method_00);
  return;
}


// ===== public string IAELODHGGDD()  [RVA 0x33CD55C]
// DNELIPCHKLK$$IAELODHGGDD @ RVA 0x33CD55C

System_String_o * DNELIPCHKLK__IAELODHGGDD(DNELIPCHKLK_o *__this,MethodInfo *method)

{
  return (__this->fields).ANOPJEEGOLJ;
}


// ===== private void EMIGGAINFCC()  [RVA 0x33CD120]
// DNELIPCHKLK$$EMIGGAINFCC @ RVA 0x33CD120

void DNELIPCHKLK__EMIGGAINFCC(DNELIPCHKLK_o *__this,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04567e34 & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_22485/*"|"*/);
    DAT_04567e34 = 1;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = (__this->fields).GDPFBDIJNHA;
      thunk_FUN_01c20e04(values->m_Items);
      if (1 < (uint)values->max_length) {
                    /* try { // try from 034cd1b0 to 035cd1b7 has its CatchHandler @ 034cd1ec */
        values->m_Items[1] = StringLiteral_22485/*"|"*/;
                    /* try { // try from 034cd1b8 to 035cd1bb has its CatchHandler @ 034cd1d8 */
        thunk_FUN_01c20e04(values->m_Items + 1);
                    /* try { // try from 034cd1bc to 035cd1bf has its CatchHandler @ 034cd1d4 */
                    /* try { // try from 034cd1c0 to 035cd1c3 has its CatchHandler @ 034ccee8 */
                    /* try { // try from 034cd1c4 to 035cd1c7 has its CatchHandler @ 034cd1d0 */
        if (2 < (uint)values->max_length) {
                    /* try { // try from 034cd1c8 to 035cd1fb has its CatchHandler @ 034ccee8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cd1c4 with catch @ 034cd1d0
                        */
          values->m_Items[2] = (__this->fields).GJFJPLHCBKJ;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cd1bc with catch @ 034cd1d4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cd1b8 with catch @ 034cd1d8
                        */
          thunk_FUN_01c20e04(values->m_Items + 2);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cd08c with catch @ 034cd1dc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cd024 with catch @ 034cd1e0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034ccfc8 with catch @ 034cd1e4
                        */
          if (3 < (uint)values->max_length) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cd09c with catch @ 034cd1e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cd1b0 with catch @ 034cd1ec
                        */
            values->m_Items[3] = StringLiteral_22485/*"|"*/;
            thunk_FUN_01c20e04(values->m_Items + 3);
                    /* try { // try from 034cd1fc to 035cd1ff has its CatchHandler @ 034cd210 */
            if (4 < (uint)values->max_length) {
                    /* catch() { ... } // from try @ 034cd1fc with catch @ 034cd210 */
              values->m_Items[4] = (__this->fields).ANOPJEEGOLJ;
              thunk_FUN_01c20e04();
                    /* try { // try from 034cd218 to 035cd27f has its CatchHandler @ 034cd294 */
              pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
              ppSVar2 = &(__this->fields).NANIFEMFPJP;
              *ppSVar2 = pSVar1;
              thunk_FUN_01c20e04(ppSVar2,pSVar1);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static DNELIPCHKLK OBECCOPBADO()  [RVA 0x33CD564]
// DNELIPCHKLK$$OBECCOPBADO @ RVA 0x33CD564

DNELIPCHKLK_o * DNELIPCHKLK__OBECCOPBADO(MethodInfo *method)

{
  DNELIPCHKLK_o *__this;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04567e35 & 1) == 0) {
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
    DAT_04567e35 = 1;
  }
  __this = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  DNELIPCHKLK__NDNPGAKJLHM(__this,method_00);
  if (__this != (DNELIPCHKLK_o *)0x0) {
    DNELIPCHKLK__NDNPGAKJLHM(__this,method_01);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void NDNPGAKJLHM()  [RVA 0x33CD5EC]
// DNELIPCHKLK$$NDNPGAKJLHM @ RVA 0x33CD5EC

void DNELIPCHKLK__NDNPGAKJLHM(DNELIPCHKLK_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  if ((DAT_04567e36 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567e36 = 1;
  }
  (__this->fields).GDPFBDIJNHA = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).GJFJPLHCBKJ = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).ANOPJEEGOLJ = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  ppSVar1 = &(__this->fields).NANIFEMFPJP;
  *ppSVar1 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar1);
  return;
}


// ===== public bool LFHPFJOAJIO(string DBIAAJNKHLH)  [RVA 0x33CCFC4]
// DNELIPCHKLK$$LFHPFJOAJIO @ RVA 0x33CCFC4

bool DNELIPCHKLK__LFHPFJOAJIO(DNELIPCHKLK_o *__this,System_String_o *DBIAAJNKHLH,MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  
                    /* try { // try from 034ccfc8 to 035ccfef has its CatchHandler @ 034cd1e4 */
  a = (System_String_o *)
      (*(__this->klass->vtable)._3_ToString.methodPtr)
                (__this,(__this->klass->vtable)._3_ToString.method);
  bVar1 = System_String__op_Equality(a,DBIAAJNKHLH,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public string GNIGGOAIAKI()  [RVA 0x33CD668]
// DNELIPCHKLK$$GNIGGOAIAKI @ RVA 0x33CD668

System_String_o * DNELIPCHKLK__GNIGGOAIAKI(DNELIPCHKLK_o *__this,MethodInfo *method)

{
  return (__this->fields).GDPFBDIJNHA;
}


// ===== public void .ctor()  [RVA 0x33CD5D0]
// DNELIPCHKLK$$.ctor @ RVA 0x33CD5D0

void DNELIPCHKLK___ctor(DNELIPCHKLK_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  DNELIPCHKLK__NDNPGAKJLHM(__this,method_00);
  return;
}

