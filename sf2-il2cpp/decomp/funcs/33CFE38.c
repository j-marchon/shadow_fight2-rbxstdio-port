// NHOILKKCIMI$$.ctor @ RVA 0x33CFE38

void NHOILKKCIMI___ctor(NHOILKKCIMI_o *__this,EOJBGBDLBKJ_o *LDFILBCELJC,int32_t EMHMMKODGBL,
                       int32_t DJBOCGOOACA,MethodInfo *method)

{
  System_Collections_Generic_HashSet_LogType__o *__this_00;
  KLPJOKOFLJD_o *__this_01;
  KLPJOKOFLJD_o **ppKVar1;
  UniRx_CompositeDisposable_o *__this_02;
  UniRx_CompositeDisposable_o **ppUVar2;
  EOJBGBDLBKJ_o **ppEVar3;
  
                    /* try { // try from 034cfe5c to 035cfe63 has its CatchHandler @ 034cfef4 */
  if ((DAT_04567e53 & 1) == 0) {
                    /* try { // try from 034cfe78 to 035cfe83 has its CatchHandler @ 034cfee4 */
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<LogType>_Add__);
                    /* try { // try from 034cfe94 to 035cfe9b has its CatchHandler @ 034cfef0 */
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<LogType>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<LogType>_TypeInfo);
                    /* try { // try from 034cfeac to 035cfeb3 has its CatchHandler @ 034cfee8 */
    FUN_01bab630(&KLPJOKOFLJD_TypeInfo);
                    /* try { // try from 034cfeb4 to 035cfed3 has its CatchHandler @ 034cfd9c */
    DAT_04567e53 = 1;
  }
  __this_00 = (System_Collections_Generic_HashSet_LogType__o *)
              thunk_FUN_01bda818(System_Collections_Generic_HashSet<LogType>_TypeInfo);
  System_Collections_Generic_HashSet<Int32Enum>___ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,
             Method_System_Collections_Generic_HashSet<LogType>__ctor__);
  if (__this_00 != (System_Collections_Generic_HashSet_LogType__o *)0x0) {
                    /* try { // try from 034cfed4 to 035cfed7 has its CatchHandler @ 034cfeec */
                    /* try { // try from 034cfed8 to 035cfedb has its CatchHandler @ 034cfee0 */
                    /* try { // try from 034cfedc to 035cff0b has its CatchHandler @ 034cfd9c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cfed8 with catch @ 034cfee0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cfe78 with catch @ 034cfee4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cfeac with catch @ 034cfee8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cfed4 with catch @ 034cfeec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cfe94 with catch @ 034cfef0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cfe5c with catch @ 034cfef4
                        */
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,0,
               Method_System_Collections_Generic_HashSet<LogType>_Add__);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,1,
               Method_System_Collections_Generic_HashSet<LogType>_Add__);
                    /* try { // try from 034cff0c to 035cff0f has its CatchHandler @ 034cff64 */
                    /* try { // try from 034cff10 to 035cff73 has its CatchHandler @ 034cfd9c */
    (__this->fields).IEJNCANONEC = __this_00;
    thunk_FUN_01c20e04(&__this->fields,__this_00);
    __this_01 = (KLPJOKOFLJD_o *)thunk_FUN_01bda818(KLPJOKOFLJD_TypeInfo);
    KLPJOKOFLJD___ctor(__this_01,(MethodInfo *)0x0);
    ppKVar1 = &(__this->fields).GAHDPKPIMHK;
    *ppKVar1 = __this_01;
    thunk_FUN_01c20e04(ppKVar1,__this_01);
    __this_02 = (UniRx_CompositeDisposable_o *)
                thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
    UniRx_CompositeDisposable___ctor(__this_02,(MethodInfo *)0x0);
    ppUVar2 = &(__this->fields).BNAIPPCOGPE;
    *ppUVar2 = __this_02;
    thunk_FUN_01c20e04(ppUVar2,__this_02);
                    /* catch() { ... } // from try @ 034cff0c with catch @ 034cff64 */
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    ppEVar3 = &(__this->fields).MOIKNMBMBBO;
    *ppEVar3 = LDFILBCELJC;
                    /* try { // try from 034cff74 to 035cff7b has its CatchHandler @ 034cff90 */
                    /* try { // try from 034cff7c to 035cff87 has its CatchHandler @ 034cfd9c */
    thunk_FUN_01c20e04(ppEVar3,LDFILBCELJC);
    (__this->fields).CIENNBPAEGH = EMHMMKODGBL;
    (__this->fields).OHMHCOBHPCG = DJBOCGOOACA;
                    /* try { // try from 034cff88 to 035cff8f has its CatchHandler @ 034cff90 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034cff74 with catch @ 034cff90
                       catch(type#2 @ 00000000) { ... } // from try @ 034cff88 with catch @ 034cff90
                        */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

