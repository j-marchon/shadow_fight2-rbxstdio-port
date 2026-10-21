// TypeDefIndex 3079
// Namespace: 
// public class KKEKJDLEJIL
// Fields:
//   public HOOAAGABMBL HLAAFCIMBAP; // 0x10
//   public HOOAAGABMBL PNAAPNFPCPI; // 0x18
//   public HOOAAGABMBL PEMECEBIJDM; // 0x20
//   public HOOAAGABMBL IIDEPPHFJPA; // 0x28
//   public HOOAAGABMBL NBHGHLIPCAP; // 0x30
//   public HOOAAGABMBL AIDDHEHFBEG; // 0x38
//   public HOOAAGABMBL GFNKONPLPEB; // 0x40
//   public HOOAAGABMBL NOKHEGPHOHK; // 0x48
//   public HOOAAGABMBL GCPBHJOPMJE; // 0x50
//   public List<HOOAAGABMBL> IIBBDKMIPOF; // 0x58

// ===== public KKEKJDLEJIL FAOBHLCDKJI()  [RVA 0x34C5F84]
// KKEKJDLEJIL$$FAOBHLCDKJI @ RVA 0x34C5F84

KKEKJDLEJIL_o * KKEKJDLEJIL__FAOBHLCDKJI(KKEKJDLEJIL_o *__this,MethodInfo *method)

{
  KKEKJDLEJIL_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568637 & 1) == 0) {
    FUN_01bab630(&KKEKJDLEJIL_TypeInfo);
    DAT_04568637 = 1;
    method = extraout_x1;
  }
  __this_00 = (KKEKJDLEJIL_o *)thunk_FUN_01bda818(KKEKJDLEJIL_TypeInfo,method);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (KKEKJDLEJIL_o *)0x0) {
    (__this_00->fields).HLAAFCIMBAP = (__this->fields).HLAAFCIMBAP;
    thunk_FUN_01c20e04();
    (__this_00->fields).PNAAPNFPCPI = (__this->fields).PNAAPNFPCPI;
    thunk_FUN_01c20e04();
    (__this_00->fields).PEMECEBIJDM = (__this->fields).PEMECEBIJDM;
    thunk_FUN_01c20e04();
    (__this_00->fields).IIDEPPHFJPA = (__this->fields).IIDEPPHFJPA;
    thunk_FUN_01c20e04();
    (__this_00->fields).NBHGHLIPCAP = (__this->fields).NBHGHLIPCAP;
    thunk_FUN_01c20e04();
    (__this_00->fields).AIDDHEHFBEG = (__this->fields).AIDDHEHFBEG;
    thunk_FUN_01c20e04();
    (__this_00->fields).GFNKONPLPEB = (__this->fields).GFNKONPLPEB;
    thunk_FUN_01c20e04();
    (__this_00->fields).NOKHEGPHOHK = (__this->fields).NOKHEGPHOHK;
    thunk_FUN_01c20e04();
    (__this_00->fields).GCPBHJOPMJE = (__this->fields).GCPBHJOPMJE;
    thunk_FUN_01c20e04();
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool DGCODECJJCC(KKEKJDLEJIL NECMHLICHNE)  [RVA 0x34C607C]
// KKEKJDLEJIL$$DGCODECJJCC @ RVA 0x34C607C

bool KKEKJDLEJIL__DGCODECJJCC(KKEKJDLEJIL_o *__this,KKEKJDLEJIL_o *NECMHLICHNE,MethodInfo *method)

{
  int32_t iVar1;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar2;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar3;
  
  if ((DAT_04568638 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Count<HOOAAGABMBL>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<HOOAAGABMBL>__);
    FUN_01bab630(&System_Func<HOOAAGABMBL,_bool>_TypeInfo);
    FUN_01bab630(&Method_KKEKJDLEJIL_OLKFBGMOLMG__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    DAT_04568638 = 1;
  }
  if (NECMHLICHNE != (KKEKJDLEJIL_o *)0x0) {
    if ((((((NECMHLICHNE->fields).PEMECEBIJDM != (__this->fields).PEMECEBIJDM) ||
          ((NECMHLICHNE->fields).IIDEPPHFJPA != (__this->fields).IIDEPPHFJPA)) ||
         ((NECMHLICHNE->fields).HLAAFCIMBAP != (__this->fields).HLAAFCIMBAP)) ||
        (((NECMHLICHNE->fields).PNAAPNFPCPI != (__this->fields).PNAAPNFPCPI ||
         ((NECMHLICHNE->fields).AIDDHEHFBEG != (__this->fields).AIDDHEHFBEG)))) ||
       (((NECMHLICHNE->fields).GFNKONPLPEB != (__this->fields).GFNKONPLPEB ||
        (((NECMHLICHNE->fields).NOKHEGPHOHK != (__this->fields).NOKHEGPHOHK ||
         ((NECMHLICHNE->fields).NBHGHLIPCAP != (__this->fields).NBHGHLIPCAP)))))) {
      return false;
    }
    pSVar3 = (NECMHLICHNE->fields).IIBBDKMIPOF;
    if ((pSVar3 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) &&
       (pSVar2 = (__this->fields).IIBBDKMIPOF,
       pSVar2 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) {
      if ((pSVar3->fields)._size != (pSVar2->fields)._size) {
        return false;
      }
      predicate = (System_Func_TSource__bool__o *)
                  thunk_FUN_01bda818(System_Func<HOOAAGABMBL,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      source = System_Linq_Enumerable__Where<object>
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,predicate,
                          Method_System_Linq_Enumerable_Where<HOOAAGABMBL>__);
      iVar1 = System_Linq_Enumerable__Count<object>
                        (source,Method_System_Linq_Enumerable_Count<HOOAAGABMBL>__);
      pSVar3 = (__this->fields).IIBBDKMIPOF;
      if (pSVar3 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
        return iVar1 == (pSVar3->fields)._size;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool OLKFBGMOLMG(HOOAAGABMBL LFINFBNOLFG)  [RVA 0x34C6200]
// KKEKJDLEJIL$$OLKFBGMOLMG @ RVA 0x34C6200

bool KKEKJDLEJIL__OLKFBGMOLMG(KKEKJDLEJIL_o *__this,HOOAAGABMBL_o *LFINFBNOLFG,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  
  if ((DAT_04568639 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Contains__);
    DAT_04568639 = 1;
  }
  __this_00 = (__this->fields).IIBBDKMIPOF;
  if (__this_00 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    bVar1 = System_Collections_Generic_List<object>__Contains
                      ((System_Collections_Generic_List_object__o *)__this_00,
                       (Il2CppObject *)LFINFBNOLFG,
                       Method_System_Collections_Generic_List<HOOAAGABMBL>_Contains__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34C6074]
// KKEKJDLEJIL$$.ctor @ RVA 0x34C6074

void KKEKJDLEJIL___ctor(KKEKJDLEJIL_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

