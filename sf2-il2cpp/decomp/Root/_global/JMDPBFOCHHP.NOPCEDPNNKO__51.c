// TypeDefIndex 51
// Namespace: 
// public class JMDPBFOCHHP.NOPCEDPNNKO
// Fields:
//   public List<JMDPBFOCHHP.HJLEKMDIDPO> GADHINPJDAF; // 0x10
//   public List<JMDPBFOCHHP.EFAJBOEHPLJ> LNFJJJOGJKE; // 0x18
//   public List<JMDPBFOCHHP.ENBCJNLAHAC> NPGALOBDIHL; // 0x20

// ===== public JMDPBFOCHHP.HJLEKMDIDPO FPPDGOEOJCH(string DIIDFLPOBMC)  [RVA 0x2FF7BF8]
// JMDPBFOCHHP.NOPCEDPNNKO$$FPPDGOEOJCH @ RVA 0x2FF7BF8

JMDPBFOCHHP_HJLEKMDIDPO_o *
JMDPBFOCHHP_NOPCEDPNNKO__FPPDGOEOJCH
          (JMDPBFOCHHP_NOPCEDPNNKO_o *__this,System_String_o *DIIDFLPOBMC,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  JMDPBFOCHHP_HJLEKMDIDPO_o *pJVar1;
  System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *source;
  
  if ((DAT_04565ad1 & 1) == 0) {
                    /* try { // try from 030f7c28 to 031f7c37 has its CatchHandler @ 030f7da8 */
    FUN_01bab630(&Method_JMDPBFOCHHP_NOPCEDPNNKO_CMEEPMLCPGE_LFEKAGIBGFK__);
    FUN_01bab630(&JMDPBFOCHHP_NOPCEDPNNKO_CMEEPMLCPGE_TypeInfo);
                    /* try { // try from 030f7c3c to 031f7c73 has its CatchHandler @ 030f7da4 */
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<JMDPBFOCHHP_HJLEKMDIDPO>__);
    FUN_01bab630(&System_Func<JMDPBFOCHHP_HJLEKMDIDPO,_bool>_TypeInfo);
    DAT_04565ad1 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(JMDPBFOCHHP_NOPCEDPNNKO_CMEEPMLCPGE_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
                    /* try { // try from 030f7c84 to 031f7ca7 has its CatchHandler @ 030f7ddc */
    __this_00[1].klass = (Il2CppClass *)DIIDFLPOBMC;
    thunk_FUN_01c20e04(__this_00 + 1,DIIDFLPOBMC);
    source = (__this->fields).GADHINPJDAF;
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(System_Func<JMDPBFOCHHP_HJLEKMDIDPO,_bool>_TypeInfo);
                    /* try { // try from 030f7cb8 to 031f7cbb has its CatchHandler @ 030f7dc8 */
    System_Func<object,_bool>___ctor();
                    /* try { // try from 030f7cc4 to 031f7ccb has its CatchHandler @ 030f7ddc */
                    /* try { // try from 030f7ccc to 031f7ce3 has its CatchHandler @ 030f7db8 */
    pJVar1 = (JMDPBFOCHHP_HJLEKMDIDPO_o *)
             System_Linq_Enumerable__FirstOrDefault<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                        Method_System_Linq_Enumerable_FirstOrDefault<JMDPBFOCHHP_HJLEKMDIDPO>__);
    return pJVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x2FFB284]
// JMDPBFOCHHP.NOPCEDPNNKO$$.ctor @ RVA 0x2FFB284

void JMDPBFOCHHP_NOPCEDPNNKO___ctor(JMDPBFOCHHP_NOPCEDPNNKO_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *__this_00;
  System_Collections_Generic_List_JMDPBFOCHHP_EFAJBOEHPLJ__o *__this_01;
  System_Collections_Generic_List_JMDPBFOCHHP_EFAJBOEHPLJ__o **ppSVar1;
  System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *__this_02;
  System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565ad2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_EFAJBOEHPLJ>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<JMDPBFOCHHP_EFAJBOEHPLJ>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_TypeInfo);
    DAT_04565ad2 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>__ctor__);
  (__this->fields).GADHINPJDAF = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (System_Collections_Generic_List_JMDPBFOCHHP_EFAJBOEHPLJ__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<JMDPBFOCHHP_EFAJBOEHPLJ>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<JMDPBFOCHHP_EFAJBOEHPLJ>__ctor__);
  ppSVar1 = &(__this->fields).LNFJJJOGJKE;
  *ppSVar1 = __this_01;
  thunk_FUN_01c20e04(ppSVar1,__this_01);
  __this_02 = (System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>__ctor__);
  ppSVar2 = &(__this->fields).NPGALOBDIHL;
  *ppSVar2 = __this_02;
  thunk_FUN_01c20e04(ppSVar2,__this_02);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public JMDPBFOCHHP.EFAJBOEHPLJ BHJOLIJDBLO(string BJEEDJEKAMF)  [RVA 0x2FF856C]
// JMDPBFOCHHP.NOPCEDPNNKO$$BHJOLIJDBLO @ RVA 0x2FF856C

JMDPBFOCHHP_EFAJBOEHPLJ_o *
JMDPBFOCHHP_NOPCEDPNNKO__BHJOLIJDBLO
          (JMDPBFOCHHP_NOPCEDPNNKO_o *__this,System_String_o *BJEEDJEKAMF,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  JMDPBFOCHHP_EFAJBOEHPLJ_o *pJVar1;
  System_Collections_Generic_List_JMDPBFOCHHP_EFAJBOEHPLJ__o *source;
  
  if ((DAT_04565ad3 & 1) == 0) {
    FUN_01bab630(&Method_JMDPBFOCHHP_NOPCEDPNNKO_AALDIFBFBJI_GPPGBIMJGMK__);
    FUN_01bab630(&JMDPBFOCHHP_NOPCEDPNNKO_AALDIFBFBJI_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<JMDPBFOCHHP_EFAJBOEHPLJ>__);
    FUN_01bab630(&System_Func<JMDPBFOCHHP_EFAJBOEHPLJ,_bool>_TypeInfo);
    DAT_04565ad3 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(JMDPBFOCHHP_NOPCEDPNNKO_AALDIFBFBJI_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)BJEEDJEKAMF;
    thunk_FUN_01c20e04(__this_00 + 1,BJEEDJEKAMF);
    source = (__this->fields).LNFJJJOGJKE;
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(System_Func<JMDPBFOCHHP_EFAJBOEHPLJ,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    pJVar1 = (JMDPBFOCHHP_EFAJBOEHPLJ_o *)
             System_Linq_Enumerable__FirstOrDefault<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                        Method_System_Linq_Enumerable_FirstOrDefault<JMDPBFOCHHP_EFAJBOEHPLJ>__);
    return pJVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public JMDPBFOCHHP.ODJJOAOCFKO DOKLIOAMCCO(string FLMDPLPNBFC)  [RVA 0x2FF9390]
// JMDPBFOCHHP.NOPCEDPNNKO$$DOKLIOAMCCO @ RVA 0x2FF9390

JMDPBFOCHHP_ODJJOAOCFKO_o *
JMDPBFOCHHP_NOPCEDPNNKO__DOKLIOAMCCO
          (JMDPBFOCHHP_NOPCEDPNNKO_o *__this,System_String_o *FLMDPLPNBFC,MethodInfo *method)

{
  JMDPBFOCHHP_HJLEKMDIDPO_o *pJVar1;
  JMDPBFOCHHP_EFAJBOEHPLJ_o *pJVar2;
  
  pJVar1 = JMDPBFOCHHP_NOPCEDPNNKO__FPPDGOEOJCH(__this,FLMDPLPNBFC,method);
  if (pJVar1 != (JMDPBFOCHHP_HJLEKMDIDPO_o *)0x0) {
    return (JMDPBFOCHHP_ODJJOAOCFKO_o *)pJVar1;
  }
  pJVar2 = JMDPBFOCHHP_NOPCEDPNNKO__BHJOLIJDBLO(__this,FLMDPLPNBFC,method);
  return (JMDPBFOCHHP_ODJJOAOCFKO_o *)pJVar2;
}

