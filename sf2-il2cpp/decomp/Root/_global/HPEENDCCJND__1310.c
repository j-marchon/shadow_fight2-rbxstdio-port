// TypeDefIndex 1310
// Namespace: 
// public abstract class HPEENDCCJND
// Fields:
//   private const string IKDFLCJKNGA = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//   private string NHGEHIFDNPB; // 0x10
//   protected Random NBAAKDGJIEI; // 0x18
//   private List<object> EIHCMKCJPJO; // 0x20

// ===== private bool BCEJCCGFMOP(string ABDAOEKFPNA, string ECHODGPFKED)  [RVA 0x3157C28]
// HPEENDCCJND$$BCEJCCGFMOP @ RVA 0x3157C28

bool HPEENDCCJND__BCEJCCGFMOP
               (HPEENDCCJND_o *__this,System_String_o *ABDAOEKFPNA,System_String_o *ECHODGPFKED,
               MethodInfo *method)

{
  bool bVar1;
  double dVar2;
  double local_38;
  double local_30;
  int64_t local_28;
  int64_t local_18;
  
  local_18 = 0;
                    /* try { // try from 03257c38 to 03357c3f has its CatchHandler @ 0325801c */
  local_30 = 0.0;
  local_28 = 0;
  local_38 = 0.0;
                    /* try { // try from 03257c50 to 03357c57 has its CatchHandler @ 03258034 */
  bVar1 = System_String__op_Equality(ABDAOEKFPNA,ECHODGPFKED,(MethodInfo *)0x0);
                    /* try { // try from 03257c6c to 03357c7f has its CatchHandler @ 03258018 */
                    /* try { // try from 03257c90 to 03357c97 has its CatchHandler @ 0325802c */
  if ((bVar1) ||
     (((bVar1 = System_Int64__TryParse(ABDAOEKFPNA,&local_18,(MethodInfo *)0x0), bVar1 &&
       (bVar1 = System_Int64__TryParse(ECHODGPFKED,&local_28,(MethodInfo *)0x0), bVar1)) &&
      (local_18 == local_28)))) {
                    /* try { // try from 03257c58 to 03357c63 has its CatchHandler @ 03258038 */
    bVar1 = true;
  }
  else {
                    /* try { // try from 03257ca0 to 03357ca7 has its CatchHandler @ 03258040 */
    bVar1 = System_Double__TryParse(ABDAOEKFPNA,&local_30,(MethodInfo *)0x0);
                    /* try { // try from 03257ca8 to 03357cb3 has its CatchHandler @ 03258064 */
    if ((bVar1) && (bVar1 = System_Double__TryParse(ECHODGPFKED,&local_38,(MethodInfo *)0x0), bVar1)
       ) {
                    /* try { // try from 03257cc4 to 03357ccb has its CatchHandler @ 03258044 */
      local_30 = local_30 - local_38;
                    /* try { // try from 03257cd4 to 03357cdb has its CatchHandler @ 03258060 */
      dVar2 = -local_30;
      if (0.0 <= local_30) {
        dVar2 = local_30;
      }
                    /* try { // try from 03257cdc to 03357ce7 has its CatchHandler @ 03258030 */
      bVar1 = dVar2 < 0.001;
    }
    else {
      bVar1 = false;
    }
  }
                    /* try { // try from 03257cf0 to 03357d03 has its CatchHandler @ 03258054 */
  return bVar1;
}


// ===== protected virtual string LIOJDJDKNOA(string CJNHFNHJHPE)  [RVA 0x3157CFC]
// HPEENDCCJND$$LIOJDJDKNOA @ RVA 0x3157CFC

System_String_o *
HPEENDCCJND__LIOJDJDKNOA(HPEENDCCJND_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  return CJNHFNHJHPE;
}


// ===== protected double GGLNDGHIMDJ(int OGPGLGPMEPD)  [RVA 0x3157D04]
// HPEENDCCJND$$GGLNDGHIMDJ @ RVA 0x3157D04

double HPEENDCCJND__GGLNDGHIMDJ(HPEENDCCJND_o *__this,int32_t OGPGLGPMEPD,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar1;
  double *pdVar2;
  
                    /* try { // try from 03257d0c to 03357d17 has its CatchHandler @ 0325805c */
                    /* try { // try from 03257d1c to 03357d2b has its CatchHandler @ 03258010 */
  if ((DAT_0456684c & 1) == 0) {
    FUN_01bab630(&double_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<object>_get_Item__);
                    /* try { // try from 03257d3c to 03357d47 has its CatchHandler @ 0325800c */
    DAT_0456684c = 1;
  }
  __this_00 = (__this->fields).EIHCMKCJPJO;
                    /* try { // try from 03257d4c to 03357d5b has its CatchHandler @ 03258004 */
  if ((__this_00 != (System_Collections_Generic_List_object__o *)0x0) &&
     (pIVar1 = System_Collections_Generic_List<object>__get_Item
                         (__this_00,OGPGLGPMEPD + -1,
                          Method_System_Collections_Generic_List<object>_get_Item__),
     pIVar1 != (Il2CppObject *)0x0)) {
                    /* try { // try from 03257d6c to 03357d77 has its CatchHandler @ 03258008 */
                    /* try { // try from 03257d7c to 03357d8b has its CatchHandler @ 03257ffc */
    if ((pIVar1->klass->_1).element_class == (double_TypeInfo->_1).element_class) {
      pdVar2 = (double *)thunk_FUN_01bda96c();
      return *pdVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01babc64();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected string ALPMDLFPJEH(string DIHAKADKIKM)  [RVA 0x3157D9C]
// HPEENDCCJND$$ALPMDLFPJEH @ RVA 0x3157D9C

System_String_o *
HPEENDCCJND__ALPMDLFPJEH(HPEENDCCJND_o *__this,System_String_o *DIHAKADKIKM,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  System_Random_o *pSVar4;
  System_String_o *pSVar5;
  uint16_t local_24 [2];
  
                    /* try { // try from 03257d9c to 03357da7 has its CatchHandler @ 03258000 */
                    /* try { // try from 03257dac to 03357dbb has its CatchHandler @ 03257ff4 */
  if ((DAT_0456684d & 1) == 0) {
    FUN_01bab630(&char_TypeInfo);
                    /* try { // try from 03257dcc to 03357dd7 has its CatchHandler @ 03257ff0 */
    DAT_0456684d = 1;
  }
  if ((DIHAKADKIKM != (System_String_o *)0x0) &&
     (pSVar4 = (__this->fields).NBAAKDGJIEI, pSVar4 != (System_Random_o *)0x0)) {
                    /* try { // try from 03257ddc to 03357def has its CatchHandler @ 03257fec */
    iVar2 = (DIHAKADKIKM->fields)._stringLength + -1;
    iVar3 = (*(pSVar4->klass->vtable)._5_Next.methodPtr)
                      (pSVar4,(pSVar4->klass->vtable)._5_Next.method);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = iVar3 / iVar2;
    }
                    /* try { // try from 03257e00 to 03357e0b has its CatchHandler @ 03257fe8 */
    local_24[0] = System_String__get_Chars(DIHAKADKIKM,iVar3 - iVar1 * iVar2,(MethodInfo *)0x0);
                    /* try { // try from 03257e10 to 03357e23 has its CatchHandler @ 03257fe4 */
    if ((char_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(char_TypeInfo);
    }
                    /* try { // try from 03257e24 to 03357faf has its CatchHandler @ 03257784 */
    pSVar5 = System_Char__ToString((uint16_t)local_24,(MethodInfo *)0x0);
    return pSVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void .ctor()  [RVA 0x3157E88]
// HPEENDCCJND$$.ctor @ RVA 0x3157E88

void HPEENDCCJND___ctor(HPEENDCCJND_o *__this,MethodInfo *method)

{
  System_Random_o *__this_00;
  System_Random_o **ppSVar1;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_List_object__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456684e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<object>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<object>_TypeInfo);
    FUN_01bab630(&System_Random_TypeInfo);
    DAT_0456684e = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Random_o *)thunk_FUN_01bda818(System_Random_TypeInfo,method);
  System_Random___ctor(__this_00,0x2a,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields).NBAAKDGJIEI;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<object>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_01,Method_System_Collections_Generic_List<object>__ctor__);
  ppSVar2 = &(__this->fields).EIHCMKCJPJO;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected int MGOAMGFLEAL(int OGPGLGPMEPD)  [RVA 0x3157F4C]
// HPEENDCCJND$$MGOAMGFLEAL @ RVA 0x3157F4C

int32_t HPEENDCCJND__MGOAMGFLEAL(HPEENDCCJND_o *__this,int32_t OGPGLGPMEPD,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar1;
  int32_t *piVar2;
  
  if ((DAT_0456684f & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<object>_get_Item__);
    DAT_0456684f = 1;
  }
  __this_00 = (__this->fields).EIHCMKCJPJO;
  if ((__this_00 != (System_Collections_Generic_List_object__o *)0x0) &&
     (pIVar1 = System_Collections_Generic_List<object>__get_Item
                         (__this_00,OGPGLGPMEPD + -1,
                          Method_System_Collections_Generic_List<object>_get_Item__),
     pIVar1 != (Il2CppObject *)0x0)) {
                    /* try { // try from 03257fb0 to 03357fb7 has its CatchHandler @ 0325807c */
                    /* try { // try from 03257fb8 to 03357fbb has its CatchHandler @ 0325806c */
                    /* try { // try from 03257fbc to 03357fbf has its CatchHandler @ 03258058 */
                    /* try { // try from 03257fc0 to 03357fc3 has its CatchHandler @ 03258048 */
                    /* try { // try from 03257fc4 to 03357fc7 has its CatchHandler @ 0325803c */
    if ((pIVar1->klass->_1).element_class == (int_TypeInfo->_1).element_class) {
                    /* try { // try from 03257fc8 to 03357fcb has its CatchHandler @ 03258028 */
      piVar2 = (int32_t *)thunk_FUN_01bda96c();
                    /* try { // try from 03257fcc to 03357fcf has its CatchHandler @ 03258024 */
                    /* try { // try from 03257fd0 to 03357fd3 has its CatchHandler @ 03258020 */
                    /* try { // try from 03257fd4 to 03357fd7 has its CatchHandler @ 03257784 */
                    /* try { // try from 03257fd8 to 03357fdb has its CatchHandler @ 03257ff8 */
      return *piVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01babc64();
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03257fdc to 0335809b has its CatchHandler @ 03257784 */
  FUN_01bab8c8();
}


// ===== protected string PFHOGFBJGDE(string[] FBFHONMMDMM)  [RVA 0x3157FE4]
// HPEENDCCJND$$PFHOGFBJGDE @ RVA 0x3157FE4

System_String_o *
HPEENDCCJND__PFHOGFBJGDE(HPEENDCCJND_o *__this,System_String_array *FBFHONMMDMM,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  System_Random_o *pSVar5;
  
                    /* catch() { ... } // from try @ 03257e10 with catch @ 03257fe4 */
                    /* catch() { ... } // from try @ 03257e00 with catch @ 03257fe8 */
                    /* catch() { ... } // from try @ 03257ddc with catch @ 03257fec */
                    /* catch() { ... } // from try @ 03257dcc with catch @ 03257ff0 */
                    /* catch() { ... } // from try @ 03257dac with catch @ 03257ff4 */
  if ((FBFHONMMDMM == (System_String_array *)0x0) ||
     (pSVar5 = (__this->fields).NBAAKDGJIEI, pSVar5 == (System_Random_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03257c58 with catch @ 03258038 */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 03257fd8 with catch @ 03257ff8 */
                    /* catch() { ... } // from try @ 03257d7c with catch @ 03257ffc */
                    /* catch() { ... } // from try @ 03257d9c with catch @ 03258000 */
                    /* catch() { ... } // from try @ 03257d4c with catch @ 03258004 */
                    /* catch() { ... } // from try @ 03257d6c with catch @ 03258008 */
  iVar3 = (int)FBFHONMMDMM->max_length + -1;
                    /* catch() { ... } // from try @ 03257d3c with catch @ 0325800c */
  iVar4 = (*(pSVar5->klass->vtable)._5_Next.methodPtr)
                    (pSVar5,(pSVar5->klass->vtable)._5_Next.method);
                    /* catch() { ... } // from try @ 03257d1c with catch @ 03258010 */
                    /* catch() { ... } // from try @ 03257c1c with catch @ 03258014 */
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar2 = iVar4 / iVar3;
  }
                    /* catch() { ... } // from try @ 03257c6c with catch @ 03258018 */
  uVar1 = iVar4 - iVar2 * iVar3;
                    /* catch() { ... } // from try @ 03257c38 with catch @ 0325801c */
                    /* catch() { ... } // from try @ 03257fd0 with catch @ 03258020 */
  if (uVar1 < (uint)FBFHONMMDMM->max_length) {
                    /* catch() { ... } // from try @ 03257fcc with catch @ 03258024 */
                    /* catch() { ... } // from try @ 03257fc8 with catch @ 03258028 */
                    /* catch() { ... } // from try @ 03257c90 with catch @ 0325802c */
                    /* catch() { ... } // from try @ 03257cdc with catch @ 03258030 */
                    /* catch() { ... } // from try @ 03257c50 with catch @ 03258034 */
    return FBFHONMMDMM->m_Items[(int)uVar1];
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03257fc4 with catch @ 0325803c */
  FUN_01bab8d0();
}


// ===== protected double AJKIGPMHEEO(double LFINFBNOLFG)  [RVA 0x3158040]
// HPEENDCCJND$$AJKIGPMHEEO @ RVA 0x3158040

double HPEENDCCJND__AJKIGPMHEEO(HPEENDCCJND_o *__this,double LFINFBNOLFG,MethodInfo *method)

{
  System_Exception_o *__this_00;
  undefined8 uVar1;
  
                    /* catch() { ... } // from try @ 03257ca0 with catch @ 03258040 */
                    /* catch() { ... } // from try @ 03257cc4 with catch @ 03258044 */
                    /* catch() { ... } // from try @ 03257fc0 with catch @ 03258048 */
                    /* catch() { ... } // from try @ 03257c14 with catch @ 0325804c */
                    /* catch() { ... } // from try @ 03257bfc with catch @ 03258050 */
                    /* catch() { ... } // from try @ 03257cf0 with catch @ 03258054 */
                    /* catch() { ... } // from try @ 03257fbc with catch @ 03258058 */
                    /* catch() { ... } // from try @ 03257d0c with catch @ 0325805c */
                    /* catch() { ... } // from try @ 03257cd4 with catch @ 03258060 */
                    /* catch() { ... } // from try @ 03257ca8 with catch @ 03258064 */
                    /* catch() { ... } // from try @ 03257be0 with catch @ 03258068 */
                    /* catch() { ... } // from try @ 03257fb8 with catch @ 0325806c */
                    /* catch() { ... } // from try @ 03257bd0 with catch @ 03258070 */
                    /* catch() { ... } // from try @ 03257b68 with catch @ 03258074 */
                    /* catch() { ... } // from try @ 03257b0c with catch @ 03258078 */
  if (((-3.4028234663852886e+38 <= LFINFBNOLFG) && (LFINFBNOLFG <= 3.4028234663852886e+38)) &&
     ((ulong)ABS(LFINFBNOLFG) < 0x7ff0000000000001)) {
                    /* catch() { ... } // from try @ 03257fb0 with catch @ 0325807c */
    return LFINFBNOLFG;
  }
  thunk_FUN_01bb9178(&System_Exception_TypeInfo);
  __this_00 = (System_Exception_o *)thunk_FUN_01bda818();
                    /* try { // try from 0325809c to 0335809f has its CatchHandler @ 032580b0 */
  System_Exception___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_HPEENDCCJND_AJKIGPMHEEO__);
                    /* catch() { ... } // from try @ 0325809c with catch @ 032580b0 */
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private void MBOAEJBLAPD()  [RVA 0x31580B8]
// HPEENDCCJND$$MBOAEJBLAPD @ RVA 0x31580B8

void HPEENDCCJND__MBOAEJBLAPD(HPEENDCCJND_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  Il2CppObject *pIVar3;
  System_String_o *newValue;
  int index;
  System_Collections_Generic_List_object__o *pSVar4;
  HPEENDCCJND_Fields *pHVar5;
  System_String_o *__this_00;
  int local_44;
  
                    /* try { // try from 032580c0 to 0335812f has its CatchHandler @ 03258144 */
  if ((DAT_04566850 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<object>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<object>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<object>_get_Item__);
    FUN_01bab630(&StringLiteral_21920/*"v"*/);
    DAT_04566850 = 1;
  }
  local_44 = 0;
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._6_unknown.methodPtr)
                     (__this,(__this->klass->vtable)._6_unknown.method);
  pHVar5 = &__this->fields;
  pHVar5->NHGEHIFDNPB = pSVar2;
                    /* try { // try from 03258130 to 0335813b has its CatchHandler @ 03257784 */
  thunk_FUN_01c20e04(pHVar5,pSVar2);
                    /* try { // try from 0325813c to 03358143 has its CatchHandler @ 03258144 */
                    /* catch() { ... } // from try @ 032580c0 with catch @ 03258144
                       catch() { ... } // from try @ 0325813c with catch @ 03258144 */
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pHVar5->NHGEHIFDNPB,(MethodInfo *)0x0);
  if ((bVar1) ||
     (bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                        ((System_Collections_Generic_List_T__o *)(__this->fields).EIHCMKCJPJO,
                         Method_DJNBJHPDKDP_OBECCOPBADO<object>__), bVar1)) {
    return;
  }
  pSVar4 = (__this->fields).EIHCMKCJPJO;
  if (pSVar4 != (System_Collections_Generic_List_object__o *)0x0) {
    index = 0;
    do {
      if ((pSVar4->fields)._size <= index) {
        return;
      }
      __this_00 = (__this->fields).NHGEHIFDNPB;
      local_44 = index + 1;
      pSVar2 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat(StringLiteral_21920/*"v"*/,pSVar2,(MethodInfo *)0x0);
      pSVar4 = (__this->fields).EIHCMKCJPJO;
      if (((pSVar4 == (System_Collections_Generic_List_object__o *)0x0) ||
          (pIVar3 = System_Collections_Generic_List<object>__get_Item
                              (pSVar4,index,
                               Method_System_Collections_Generic_List<object>_get_Item__),
          pIVar3 == (Il2CppObject *)0x0)) ||
         (newValue = (System_String_o *)
                     (*pIVar3->klass->vtable[3].methodPtr)(pIVar3,pIVar3->klass->vtable[3].method),
         __this_00 == (System_String_o *)0x0)) break;
      pSVar2 = System_String__Replace(__this_00,pSVar2,newValue,(MethodInfo *)0x0);
      (__this->fields).NHGEHIFDNPB = pSVar2;
      thunk_FUN_01c20e04(pHVar5,pSVar2);
      pSVar4 = (__this->fields).EIHCMKCJPJO;
      index = index + 1;
    } while (pSVar4 != (System_Collections_Generic_List_object__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected int MNAABHNFFGN(int CKCOLJLFJDB = 0, int DEDNHOELFOD = 255)  [RVA 0x3157E44]
// HPEENDCCJND$$MNAABHNFFGN @ RVA 0x3157E44

int32_t HPEENDCCJND__MNAABHNFFGN
                  (HPEENDCCJND_o *__this,int32_t CKCOLJLFJDB,int32_t DEDNHOELFOD,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  System_Random_o *pSVar4;
  
  pSVar4 = (__this->fields).NBAAKDGJIEI;
  if (pSVar4 != (System_Random_o *)0x0) {
    iVar3 = (*(pSVar4->klass->vtable)._5_Next.methodPtr)
                      (pSVar4,(pSVar4->klass->vtable)._5_Next.method);
    iVar2 = DEDNHOELFOD - CKCOLJLFJDB;
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = iVar3 / iVar2;
    }
    return (iVar3 - iVar1 * iVar2) + CKCOLJLFJDB;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected double BKIOCBDNBNF(int CKCOLJLFJDB = 0, int DEDNHOELFOD = 255)  [RVA 0x3158238]
// HPEENDCCJND$$BKIOCBDNBNF @ RVA 0x3158238

double HPEENDCCJND__BKIOCBDNBNF
                 (HPEENDCCJND_o *__this,int32_t CKCOLJLFJDB,int32_t DEDNHOELFOD,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  System_Random_o *pSVar4;
  
  pSVar4 = (__this->fields).NBAAKDGJIEI;
  if (pSVar4 != (System_Random_o *)0x0) {
    iVar3 = (*(pSVar4->klass->vtable)._5_Next.methodPtr)
                      (pSVar4,(pSVar4->klass->vtable)._5_Next.method);
    iVar2 = DEDNHOELFOD - CKCOLJLFJDB;
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = iVar3 / iVar2;
    }
    return (double)((iVar3 - iVar1 * iVar2) + CKCOLJLFJDB);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void JEKKKDMPLEN(object MNODCIGLHEL)  [RVA 0x3158280]
// HPEENDCCJND$$JEKKKDMPLEN @ RVA 0x3158280

void HPEENDCCJND__JEKKKDMPLEN(HPEENDCCJND_o *__this,Il2CppObject *MNODCIGLHEL,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar3;
  
  if ((DAT_04566851 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<object>_Add__);
    DAT_04566851 = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<object>_Add__;
  __this_00 = (__this->fields).EIHCMKCJPJO;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = MNODCIGLHEL;
        thunk_FUN_01c20e04(pSVar3->m_Items + (int)uVar1,MNODCIGLHEL);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,MNODCIGLHEL,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected string FECLPLFHJAL(int OGPGLGPMEPD)  [RVA 0x315832C]
// HPEENDCCJND$$FECLPLFHJAL @ RVA 0x315832C

System_String_o *
HPEENDCCJND__FECLPLFHJAL(HPEENDCCJND_o *__this,int32_t OGPGLGPMEPD,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *pSVar1;
  
  if ((DAT_04566852 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<object>_get_Item__);
    FUN_01bab630(&string_TypeInfo);
    DAT_04566852 = 1;
  }
  __this_00 = (__this->fields).EIHCMKCJPJO;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar1 = (System_String_o *)
             System_Collections_Generic_List<object>__get_Item
                       (__this_00,OGPGLGPMEPD + -1,
                        Method_System_Collections_Generic_List<object>_get_Item__);
    if (pSVar1 != (System_String_o *)0x0) {
      if (pSVar1->klass != string_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
    }
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected string PFHOGFBJGDE(int DLEEGMFKGOO = 6)  [RVA 0x31583B4]
// HPEENDCCJND$$PFHOGFBJGDE @ RVA 0x31583B4

System_String_o *
HPEENDCCJND__PFHOGFBJGDE(HPEENDCCJND_o *__this,int32_t DLEEGMFKGOO,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  uint16_t value;
  int iVar3;
  System_Text_StringBuilder_o *__this_00;
  System_Random_o *pSVar4;
  System_String_o *pSVar5;
  
  if ((DAT_04566853 & 1) == 0) {
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_2609/*"ABCDEFGHIJKLMNOPQRSTUVWXYZ"*/);
    DAT_04566853 = 1;
  }
  __this_00 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this_00,DLEEGMFKGOO,(MethodInfo *)0x0);
  if (DLEEGMFKGOO < 1) {
    if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
LAB_03258498:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  else {
    do {
      pSVar4 = (__this->fields).NBAAKDGJIEI;
      if ((pSVar4 == (System_Random_o *)0x0) ||
         (iVar3 = (*(pSVar4->klass->vtable)._5_Next.methodPtr)
                            (pSVar4,(pSVar4->klass->vtable)._5_Next.method),
         StringLiteral_2609/*"ABCDEFGHIJKLMNOPQRSTUVWXYZ"*/ == (System_String_o *)0x0)) goto LAB_03258498;
      iVar1 = (StringLiteral_2609/*"ABCDEFGHIJKLMNOPQRSTUVWXYZ"*/->fields)._stringLength;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = iVar3 / iVar1;
      }
      value = System_String__get_Chars(StringLiteral_2609/*"ABCDEFGHIJKLMNOPQRSTUVWXYZ"*/,iVar3 - iVar2 * iVar1,(MethodInfo *)0x0);
      if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_03258498;
      System_Text_StringBuilder__Append(__this_00,value,(MethodInfo *)0x0);
      DLEEGMFKGOO = DLEEGMFKGOO + -1;
    } while (DLEEGMFKGOO != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x03258494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pSVar5 = (System_String_o *)
           (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                     (__this_00,(__this_00->klass->vtable)._3_ToString.method);
  return pSVar5;
}


// ===== public void CCGJEGLFHJB(int JKLPCJFPOBL, StringBuilder KHHGPLOMHBB, ref int PDMLJLGJJEL, ref int KGEBDJNAFIL)  [RVA 0x315849C]
// HPEENDCCJND$$CCGJEGLFHJB @ RVA 0x315849C

void HPEENDCCJND__CCGJEGLFHJB
               (HPEENDCCJND_o *__this,int32_t JKLPCJFPOBL,System_Text_StringBuilder_o *KHHGPLOMHBB,
               int32_t *PDMLJLGJJEL,int32_t *KGEBDJNAFIL,MethodInfo *method)

{
  HPEENDCCJND_Fields *pHVar1;
  int32_t length;
  bool bVar2;
  long *plVar3;
  LEGDPJHPEOB_o *__this_00;
  EILGGBOIMGE_FMFDKGKCBBG_o *__this_01;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar4;
  undefined8 uVar5;
  System_String_o *pSVar6;
  HPEENDCCJND_o *__this_02;
  System_String_array *values;
  System_String_o *pSVar7;
  MethodInfo *method_00;
  System_Collections_Generic_List_object__o *pSVar8;
  PKHMIGFEJCL_o *AAJBIMFNMBB;
  undefined1 auVar9 [16];
  int local_68;
  
  if ((DAT_04566854 & 1) == 0) {
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    FUN_01bab630(&LEGDPJHPEOB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<object>_Clear__);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_75/*"\nC#: "*/);
    FUN_01bab630(&StringLiteral_116/*"\nexec:"*/);
    FUN_01bab630(&StringLiteral_81/*"\nError evaluating expression\norigin: "*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_312/*" RPN: "*/);
    DAT_04566854 = 1;
  }
  local_68 = 0;
  if (0 < JKLPCJFPOBL) {
    pHVar1 = &__this->fields;
    do {
      (__this->fields).NHGEHIFDNPB = StringLiteral_1/*""*/;
      thunk_FUN_01c20e04(pHVar1);
      pSVar8 = (__this->fields).EIHCMKCJPJO;
      if (pSVar8 == (System_Collections_Generic_List_object__o *)0x0) {
LAB_03258b94:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      length = (pSVar8->fields)._size;
      (pSVar8->fields)._size = 0;
      (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,length,(MethodInfo *)0x0);
      }
      (*(__this->klass->vtable)._7_unknown.methodPtr)
                (__this,(__this->klass->vtable)._7_unknown.method);
      plVar3 = (long *)(*(__this->klass->vtable)._5_unknown.methodPtr)
                                 (__this,(__this->klass->vtable)._5_unknown.method);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      auVar9 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
      pSVar7 = auVar9._0_8_;
      HPEENDCCJND__MBOAEJBLAPD(__this,auVar9._8_8_);
      __this_00 = (LEGDPJHPEOB_o *)thunk_FUN_01bda818(LEGDPJHPEOB_TypeInfo);
      LEGDPJHPEOB___ctor(__this_00,(MethodInfo *)0x0);
      __this_01 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
      EILGGBOIMGE_FMFDKGKCBBG___ctor(__this_01,(MethodInfo *)0x0);
      pNVar4 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (pNVar4 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (__this_00 == (LEGDPJHPEOB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (__this_00->fields).AAJBIMFNMBB = (pNVar4->fields).QuestParameters;
      thunk_FUN_01c20e04();
      method_00 = (MethodInfo *)0x1;
      EILGGBOIMGE__KFMNMGGDHFD
                ((EILGGBOIMGE_o *)__this_00,pHVar1->NHGEHIFDNPB,__this_01,true,
                 (System_String_o *)0x0,(MethodInfo *)0x0);
      if (__this_01 == (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar5 = (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                        (__this_01,(__this_01->klass->vtable)._3_ToString.method);
      uVar5 = (*(__this->klass->vtable)._8_CENGCEHFGFN.methodPtr)
                        (__this,uVar5,(__this->klass->vtable)._8_CENGCEHFGFN.method);
      pSVar6 = (System_String_o *)
               (*(__this->klass->vtable)._4_LIOJDJDKNOA.methodPtr)
                         (__this,uVar5,(__this->klass->vtable)._4_LIOJDJDKNOA.method);
      pNVar4 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (pNVar4 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      AAJBIMFNMBB = (pNVar4->fields).QuestParameters;
      if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MFBNFJGBPBB_TypeInfo);
      }
      __this_02 = (HPEENDCCJND_o *)MFBNFJGBPBB__LPLONLCAIGL(pSVar6,AAJBIMFNMBB,(MethodInfo *)0x0);
      bVar2 = HPEENDCCJND__BCEJCCGFMOP(__this_02,(System_String_o *)__this_02,pSVar7,method_00);
      if (bVar2) {
        *KGEBDJNAFIL = *KGEBDJNAFIL + 1;
      }
      else {
        *PDMLJLGJJEL = *PDMLJLGJJEL + 1;
        values = (System_String_array *)FUN_01bab718(string___TypeInfo,8);
        if (values == (System_String_array *)0x0) goto LAB_03258b94;
        if ((int)values->max_length == 0) {
LAB_03258b50:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        values->m_Items[0] = StringLiteral_81/*"\nError evaluating expression\norigin: "*/;
        thunk_FUN_01c20e04(values->m_Items);
        pSVar6 = (System_String_o *)
                 (*(__this->klass->vtable)._6_unknown.methodPtr)
                           (__this,(__this->klass->vtable)._6_unknown.method);
        if ((uint)values->max_length < 2) goto LAB_03258b50;
        values->m_Items[1] = pSVar6;
        thunk_FUN_01c20e04(values->m_Items + 1,pSVar6);
        if ((uint)values->max_length < 3) goto LAB_03258b50;
        values->m_Items[2] = StringLiteral_116/*"\nexec:"*/;
        thunk_FUN_01c20e04(values->m_Items + 2);
        if ((uint)values->max_length < 4) goto LAB_03258b50;
        values->m_Items[3] = pHVar1->NHGEHIFDNPB;
        thunk_FUN_01c20e04(values->m_Items + 3);
        if ((uint)values->max_length < 5) goto LAB_03258b50;
        values->m_Items[4] = StringLiteral_75/*"\nC#: "*/;
        thunk_FUN_01c20e04(values->m_Items + 4);
        if ((uint)values->max_length < 6) goto LAB_03258b50;
        values->m_Items[5] = pSVar7;
        thunk_FUN_01c20e04(values->m_Items + 5,pSVar7);
        if ((uint)values->max_length < 7) goto LAB_03258b50;
        values->m_Items[6] = StringLiteral_312/*" RPN: "*/;
        thunk_FUN_01c20e04(values->m_Items + 6);
        if ((uint)values->max_length < 8) goto LAB_03258b50;
        values->m_Items[7] = (System_String_o *)__this_02;
        thunk_FUN_01c20e04(values->m_Items + 7,__this_02);
        pSVar7 = System_String__Concat(values,(MethodInfo *)0x0);
        if (KHHGPLOMHBB == (System_Text_StringBuilder_o *)0x0) goto LAB_03258b94;
        System_Text_StringBuilder__AppendLine(KHHGPLOMHBB,pSVar7,(MethodInfo *)0x0);
      }
      local_68 = local_68 + 1;
    } while (local_68 < JKLPCJFPOBL);
  }
  return;
}


// ===== protected virtual string CENGCEHFGFN(string AELIJDOOOPN)  [RVA 0x3158C04]
// HPEENDCCJND$$CENGCEHFGFN @ RVA 0x3158C04

System_String_o *
HPEENDCCJND__CENGCEHFGFN(HPEENDCCJND_o *__this,System_String_o *AELIJDOOOPN,MethodInfo *method)

{
  return AELIJDOOOPN;
}

