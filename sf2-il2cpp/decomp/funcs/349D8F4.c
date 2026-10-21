// NGKBNOEJLPH$$APEFPBIPCPM @ RVA 0x349D8F4

bool NGKBNOEJLPH__APEFPBIPCPM(NGKBNOEJLPH_o *__this,ECENNHNBAME_o *NLEBDPHNIDI,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_List_JADGCGOJLJB__o *__this_00;
  ECENNHNBAME_HJPFANEPGJF_o *pEVar3;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
                    /* try { // try from 0359d900 to 0369d913 has its CatchHandler @ 0359db00 */
  if ((DAT_04568473 & 1) == 0) {
                    /* try { // try from 0359d918 to 0369d927 has its CatchHandler @ 0359daf0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_MoveNext__);
                    /* try { // try from 0359d930 to 0369d93b has its CatchHandler @ 0359dae8 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_get_Current__);
    __this = (NGKBNOEJLPH_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_GetEnumerator__);
    DAT_04568473 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
                    /* try { // try from 0359d94c to 0369d95f has its CatchHandler @ 0359daf4 */
  local_38.fields._current = (Il2CppObject *)0x0;
  if (((NLEBDPHNIDI == (ECENNHNBAME_o *)0x0) ||
      (pEVar3 = (NLEBDPHNIDI->fields).DMGLMCBIAGL, pEVar3 == (ECENNHNBAME_HJPFANEPGJF_o *)0x0)) ||
     (__this_00 = (pEVar3->fields).GLFJDDHEMNO, __this = (NGKBNOEJLPH_o *)0x0,
     __this_00 == (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
                    /* try { // try from 0359d964 to 0369d973 has its CatchHandler @ 0359dad8 */
                    /* try { // try from 0359d97c to 0369d987 has its CatchHandler @ 0359dae0 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<JADGCGOJLJB>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_38,
                       Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_MoveNext__);
                    /* try { // try from 0359d998 to 0369d9ab has its CatchHandler @ 0359dadc */
    if (!bVar1) {
      iVar4 = 5;
      goto LAB_0359d9c0;
    }
    if ((JADGCGOJLJB_o *)local_38.fields._current == (JADGCGOJLJB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar2 = JADGCGOJLJB__NHGGBEACKBD((JADGCGOJLJB_o *)local_38.fields._current,(MethodInfo *)0x0);
                    /* try { // try from 0359d9b0 to 0369d9bf has its CatchHandler @ 0359dacc */
  } while (iVar2 != 4);
  iVar4 = 4;
LAB_0359d9c0:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_38,Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_Dispose__);
                    /* try { // try from 0359d9d0 to 0369da03 has its CatchHandler @ 0359dae4 */
  return bVar1 && iVar4 == 4;
}

