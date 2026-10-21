// FCJBEKHDLAF$$DECMILOMNIN @ RVA 0x33E52EC

bool FCJBEKHDLAF__DECMILOMNIN
               (System_Collections_Generic_List_string__o *HABKNEDEFGO,
               System_Collections_Generic_List_string__o *LABGHCCHPDJ,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_object__o *__this;
  FCJBEKHDLAF_StaticFields *pFVar2;
  
                    /* try { // try from 034e5304 to 035e5313 has its CatchHandler @ 034e5464 */
                    /* try { // try from 034e5318 to 035e5327 has its CatchHandler @ 034e5450 */
  if ((DAT_04567ec7 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_SequenceEqual<string>__);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
                    /* try { // try from 034e5368 to 035e538b has its CatchHandler @ 034e544c */
    DAT_04567ec7 = 1;
  }
  __this = (System_Collections_Generic_List_object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this,Method_System_Collections_Generic_List<string>__ctor__);
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
                    /* try { // try from 034e538c to 035e541f has its CatchHandler @ 034e5114 */
    System_Collections_Generic_List<object>__AddRange
              (__this,(System_Collections_Generic_IEnumerable_T__o *)HABKNEDEFGO,
               Method_System_Collections_Generic_List<string>_AddRange__);
    System_Collections_Generic_List<object>__AddRange
              (__this,(System_Collections_Generic_IEnumerable_T__o *)LABGHCCHPDJ,
               Method_System_Collections_Generic_List<string>_AddRange__);
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pFVar2 = FCJBEKHDLAF_TypeInfo->static_fields;
    if (pFVar2->ACDNJGLOIMC != (System_Collections_Generic_List_string__o *)0x0) {
      if ((pFVar2->ACDNJGLOIMC->fields)._size == (__this->fields)._size) {
        if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pFVar2 = FCJBEKHDLAF_TypeInfo->static_fields;
        }
        bVar1 = System_Linq_Enumerable__SequenceEqual<object>
                          ((System_Collections_Generic_IEnumerable_TSource__o *)__this,
                           (System_Collections_Generic_IEnumerable_TSource__o *)pFVar2->ACDNJGLOIMC,
                           Method_System_Linq_Enumerable_SequenceEqual<string>__);
        return bVar1;
      }
                    /* try { // try from 034e5420 to 035e5427 has its CatchHandler @ 034e5454 */
                    /* try { // try from 034e5428 to 035e542b has its CatchHandler @ 034e5460 */
                    /* try { // try from 034e542c to 035e542f has its CatchHandler @ 034e5448 */
      return false;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034e5430 to 035e5433 has its CatchHandler @ 034e5460 */
  FUN_01bab8c8();
}

