// JMDPBFOCHHP$$DIFLKMKBENA @ RVA 0x2FF70F0

JMDPBFOCHHP_ENBCJNLAHAC_o *
JMDPBFOCHHP__DIFLKMKBENA
          (JMDPBFOCHHP_o *__this,System_String_o *KGLJICLJHEL,bool LLCJCPCKPJL,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar1;
  JMDPBFOCHHP_NOPCEDPNNKO_o *pJVar2;
  System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *__this_01;
  
  if ((DAT_04565aa9 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f70dc with catch @ 030f7124
                        */
    FUN_01bab630(&Method_JMDPBFOCHHP_JCBHBCKINBL_IJBIJOFGJKM__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f70cc with catch @ 030f7128
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f70ac with catch @ 030f712c
                        */
    FUN_01bab630(&JMDPBFOCHHP_JCBHBCKINBL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_Find__);
                    /* try { // try from 030f7144 to 031f7147 has its CatchHandler @ 030f7158 */
    FUN_01bab630(&System_Predicate<JMDPBFOCHHP_ENBCJNLAHAC>_TypeInfo);
    DAT_04565aa9 = 1;
  }
                    /* catch() { ... } // from try @ 030f7144 with catch @ 030f7158 */
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(JMDPBFOCHHP_JCBHBCKINBL_TypeInfo);
                    /* try { // try from 030f7164 to 031f716f has its CatchHandler @ 030f7184 */
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
                    /* try { // try from 030f7170 to 031f717b has its CatchHandler @ 030f706c */
    __this_00[1].monitor = KGLJICLJHEL;
                    /* try { // try from 030f717c to 031f7183 has its CatchHandler @ 030f7184 */
    *(bool *)&__this_00[1].klass = LLCJCPCKPJL;
    thunk_FUN_01c20e04(&__this_00[1].monitor,KGLJICLJHEL);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 030f7164 with catch @ 030f7184
                       catch(type#2 @ 00000000) { ... } // from try @ 030f717c with catch @ 030f7184
                        */
    pJVar2 = (__this->fields).OFMMMBIIDAE;
                    /* try { // try from 030f7188 to 031f71c7 has its CatchHandler @ 030f7188
                       catch() { ... } // from try @ 030f7188 with catch @ 030f7188
                       catch() { ... } // from try @ 030f71f4 with catch @ 030f7188
                       catch() { ... } // from try @ 030f722c with catch @ 030f7188
                       catch() { ... } // from try @ 030f7274 with catch @ 030f7188 */
    if (pJVar2 == (JMDPBFOCHHP_NOPCEDPNNKO_o *)0x0) {
                    /* try { // try from 030f71ec to 031f71f3 has its CatchHandler @ 030f722c */
                    /* try { // try from 030f71f4 to 031f7227 has its CatchHandler @ 030f7188 */
      return (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0;
    }
    __this_01 = (pJVar2->fields).NPGALOBDIHL;
    match = (System_Predicate_T__o *)
            thunk_FUN_01bda818(System_Predicate<JMDPBFOCHHP_ENBCJNLAHAC>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *)0x0) {
                    /* try { // try from 030f71c8 to 031f71d7 has its CatchHandler @ 030f7234 */
      pJVar1 = (JMDPBFOCHHP_ENBCJNLAHAC_o *)
               System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_01,match,
                          Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_Find__);
      return pJVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

