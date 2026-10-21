// TypeDefIndex 870
// Namespace: 
// public class ENOJCLHOINK
// Fields:
//   private GameObject LDAKOINICNJ; // 0x10
//   private List<OLKKAIFGGAK> EHJHKEEDKBE; // 0x18
//   private KBFGKFAKGPP FIFCACFAFPH; // 0x20

// ===== public void NDBCBDMBFON(List<GLCAPECMBLM> EDEHNHIHDDH)  [RVA 0x308CD24]
// ENOJCLHOINK$$NDBCBDMBFON @ RVA 0x308CD24

void ENOJCLHOINK__NDBCBDMBFON
               (ENOJCLHOINK_o *__this,System_Collections_Generic_List_GLCAPECMBLM__o *EDEHNHIHDDH,
               MethodInfo *method)

{
  KBFGKFAKGPP_o *__this_00;
  
  __this_00 = (__this->fields).FIFCACFAFPH;
  if (__this_00 != (KBFGKFAKGPP_o *)0x0) {
    KBFGKFAKGPP__NDBCBDMBFON(__this_00,EDEHNHIHDDH,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AAICFBHOPJK()  [RVA 0x308CD40]
// ENOJCLHOINK$$AAICFBHOPJK @ RVA 0x308CD40

void ENOJCLHOINK__AAICFBHOPJK(ENOJCLHOINK_o *__this,MethodInfo *method)

{
  KBFGKFAKGPP_o *__this_00;
  
  __this_00 = (__this->fields).FIFCACFAFPH;
  if (__this_00 != (KBFGKFAKGPP_o *)0x0) {
    KBFGKFAKGPP__AAICFBHOPJK(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DABOBFKFPKJ(List<GLCAPECMBLM> EDEHNHIHDDH)  [RVA 0x308CD5C]
// ENOJCLHOINK$$DABOBFKFPKJ @ RVA 0x308CD5C

void ENOJCLHOINK__DABOBFKFPKJ
               (ENOJCLHOINK_o *__this,System_Collections_Generic_List_GLCAPECMBLM__o *EDEHNHIHDDH,
               MethodInfo *method)

{
  KBFGKFAKGPP_o *__this_00;
  
  __this_00 = (__this->fields).FIFCACFAFPH;
  if (__this_00 != (KBFGKFAKGPP_o *)0x0) {
    KBFGKFAKGPP__DABOBFKFPKJ(__this_00,EDEHNHIHDDH,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AJCKLGJGBKD(HPNBNJKDGLB CPECAEHDDDB)  [RVA 0x308CD78]
// ENOJCLHOINK$$AJCKLGJGBKD @ RVA 0x308CD78

void ENOJCLHOINK__AJCKLGJGBKD(ENOJCLHOINK_o *__this,HPNBNJKDGLB_o *CPECAEHDDDB,MethodInfo *method)

{
  KBFGKFAKGPP_o *__this_00;
  
  if ((CPECAEHDDDB != (HPNBNJKDGLB_o *)0x0) &&
     (__this_00 = (__this->fields).FIFCACFAFPH, __this_00 != (KBFGKFAKGPP_o *)0x0)) {
    KBFGKFAKGPP__LLKFLBKKGAK
              (__this_00,CPECAEHDDDB,(CPECAEHDDDB->fields).super._HKPEJNKNEGG_k__BackingField,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public GameObject IJGHEOJPJLH()  [RVA 0x308CD9C]
// ENOJCLHOINK$$IJGHEOJPJLH @ RVA 0x308CD9C

UnityEngine_GameObject_o * ENOJCLHOINK__IJGHEOJPJLH(ENOJCLHOINK_o *__this,MethodInfo *method)

{
  return (__this->fields).LDAKOINICNJ;
}


// ===== public KBFGKFAKGPP CADFNLGLLOK()  [RVA 0x308CDA4]
// ENOJCLHOINK$$CADFNLGLLOK @ RVA 0x308CDA4

KBFGKFAKGPP_o * ENOJCLHOINK__CADFNLGLLOK(ENOJCLHOINK_o *__this,MethodInfo *method)

{
  return (__this->fields).FIFCACFAFPH;
}


// ===== public void OCPDLLNGGKL()  [RVA 0x308CDAC]
// ENOJCLHOINK$$OCPDLLNGGKL @ RVA 0x308CDAC

void ENOJCLHOINK__OCPDLLNGGKL(ENOJCLHOINK_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_OLKKAIFGGAK__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04566065 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_Clear__);
    DAT_04566065 = 1;
  }
  pSVar1 = (__this->fields).EHJHKEEDKBE;
  if (pSVar1 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public void AAILGEMALAJ()  [RVA 0x308CE1C]
// ENOJCLHOINK$$AAILGEMALAJ @ RVA 0x308CE1C

void ENOJCLHOINK__AAILGEMALAJ(ENOJCLHOINK_o *__this,MethodInfo *method)

{
  KBFGKFAKGPP_o *__this_00;
  
  __this_00 = (__this->fields).FIFCACFAFPH;
  if (__this_00 != (KBFGKFAKGPP_o *)0x0) {
    KBFGKFAKGPP__AAILGEMALAJ(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EPBAKPGFKLN()  [RVA 0x308CE38]
// ENOJCLHOINK$$EPBAKPGFKLN @ RVA 0x308CE38

void ENOJCLHOINK__EPBAKPGFKLN(ENOJCLHOINK_o *__this,MethodInfo *method)

{
  KBFGKFAKGPP_o *__this_00;
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  MethodInfo *extraout_x1;
  KBFGKFAKGPP_o **ppKVar2;
  
  if ((DAT_04566066 & 1) == 0) {
    FUN_01bab630(&KBFGKFAKGPP_TypeInfo);
    DAT_04566066 = 1;
    method = extraout_x1;
  }
  ppKVar2 = &(__this->fields).FIFCACFAFPH;
  if (*ppKVar2 != (KBFGKFAKGPP_o *)0x0) {
    return;
  }
  __this_00 = (KBFGKFAKGPP_o *)thunk_FUN_01bda818(KBFGKFAKGPP_TypeInfo,method);
  KBFGKFAKGPP___ctor(__this_00,(MethodInfo *)0x0);
  *ppKVar2 = __this_00;
  thunk_FUN_01c20e04(ppKVar2,__this_00);
  if ((*ppKVar2 != (KBFGKFAKGPP_o *)0x0) &&
     (pUVar1 = ((*ppKVar2)->fields).LDAKOINICNJ, pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).LDAKOINICNJ;
    if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
       (parent = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BOMEBKKKKLG(IHHNAHGMKIJ CPECAEHDDDB)  [RVA 0x308CEFC]
// ENOJCLHOINK$$BOMEBKKKKLG @ RVA 0x308CEFC

void ENOJCLHOINK__BOMEBKKKKLG(ENOJCLHOINK_o *__this,IHHNAHGMKIJ_o *CPECAEHDDDB,MethodInfo *method)

{
  KBFGKFAKGPP_o *__this_00;
  
  if ((CPECAEHDDDB != (IHHNAHGMKIJ_o *)0x0) &&
     (__this_00 = (__this->fields).FIFCACFAFPH, __this_00 != (KBFGKFAKGPP_o *)0x0)) {
    KBFGKFAKGPP__DHHAIGLEBHH
              (__this_00,CPECAEHDDDB,(CPECAEHDDDB->fields).super._HKPEJNKNEGG_k__BackingField,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<GLCAPECMBLM> JHNLKBALFBK(bool AHECABNOFFJ)  [RVA 0x308CF20]
// ENOJCLHOINK$$JHNLKBALFBK @ RVA 0x308CF20

System_Collections_Generic_List_GLCAPECMBLM__o *
ENOJCLHOINK__JHNLKBALFBK(ENOJCLHOINK_o *__this,bool AHECABNOFFJ,MethodInfo *method)

{
  KBFGKFAKGPP_o *__this_00;
  System_Collections_Generic_List_GLCAPECMBLM__o *pSVar1;
  
  __this_00 = (__this->fields).FIFCACFAFPH;
  if (__this_00 != (KBFGKFAKGPP_o *)0x0) {
    pSVar1 = KBFGKFAKGPP__JHNLKBALFBK(__this_00,AHECABNOFFJ,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FMFGOCKCEPI(HDBPKHNKOGI CPECAEHDDDB)  [RVA 0x308CF40]
// ENOJCLHOINK$$FMFGOCKCEPI @ RVA 0x308CF40

void ENOJCLHOINK__FMFGOCKCEPI(ENOJCLHOINK_o *__this,HDBPKHNKOGI_o *CPECAEHDDDB,MethodInfo *method)

{
  KBFGKFAKGPP_o *__this_00;
  
  if ((CPECAEHDDDB != (HDBPKHNKOGI_o *)0x0) &&
     (__this_00 = (__this->fields).FIFCACFAFPH, __this_00 != (KBFGKFAKGPP_o *)0x0)) {
    KBFGKFAKGPP__ODLJAONHEGG
              (__this_00,CPECAEHDDDB,(CPECAEHDDDB->fields).super._HKPEJNKNEGG_k__BackingField,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x308CF64]
// ENOJCLHOINK$$.ctor @ RVA 0x308CF64

void ENOJCLHOINK___ctor(ENOJCLHOINK_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  System_Collections_Generic_List_OLKKAIFGGAK__o **ppSVar1;
  KBFGKFAKGPP_o **ppKVar2;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566067 & 1) == 0) {
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<OLKKAIFGGAK>_TypeInfo);
    FUN_01bab630(&StringLiteral_5642/*"EffectsContainer"*/);
    DAT_04566067 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_OLKKAIFGGAK__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<OLKKAIFGGAK>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<OLKKAIFGGAK>__ctor__);
  ppSVar1 = &(__this->fields).EHJHKEEDKBE;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppKVar2 = &(__this->fields).FIFCACFAFPH;
  *ppKVar2 = (KBFGKFAKGPP_o *)0x0;
  thunk_FUN_01c20e04(ppKVar2,0);
  __this_01 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(__this_01,StringLiteral_5642/*"EffectsContainer"*/,(MethodInfo *)0x0);
  (__this->fields).LDAKOINICNJ = __this_01;
  thunk_FUN_01c20e04(&__this->fields,__this_01);
  return;
}


// ===== public void HLAKMKPFDAC(float IDBMGJFGIJH)  [RVA 0x308D054]
// ENOJCLHOINK$$HLAKMKPFDAC @ RVA 0x308D054

void ENOJCLHOINK__HLAKMKPFDAC(ENOJCLHOINK_o *__this,float IDBMGJFGIJH,MethodInfo *method)

{
  KBFGKFAKGPP_o *__this_00;
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  MethodInfo *extraout_x1;
  KBFGKFAKGPP_o **ppKVar2;
  
  if ((DAT_04566066 & 1) == 0) {
    IDBMGJFGIJH = (float)FUN_01bab630(&KBFGKFAKGPP_TypeInfo);
    DAT_04566066 = 1;
    method = extraout_x1;
  }
  ppKVar2 = &(__this->fields).FIFCACFAFPH;
  if (*ppKVar2 != (KBFGKFAKGPP_o *)0x0) {
    return;
  }
  __this_00 = (KBFGKFAKGPP_o *)thunk_FUN_01bda818(IDBMGJFGIJH,KBFGKFAKGPP_TypeInfo,method);
  KBFGKFAKGPP___ctor(__this_00,(MethodInfo *)0x0);
  *ppKVar2 = __this_00;
  thunk_FUN_01c20e04(ppKVar2,__this_00);
  if ((*ppKVar2 != (KBFGKFAKGPP_o *)0x0) &&
     (pUVar1 = ((*ppKVar2)->fields).LDAKOINICNJ, pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).LDAKOINICNJ;
    if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
       (parent = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

