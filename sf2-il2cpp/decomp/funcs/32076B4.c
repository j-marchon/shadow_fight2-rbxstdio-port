// NLPJLHOEAOE$$DGKCKLENNLI @ RVA 0x32076B4

bool NLPJLHOEAOE__DGKCKLENNLI
               (NLPJLHOEAOE_o *__this,System_Collections_Generic_List_int__o *FGPFLEGPNNE,
               MethodInfo *method)

{
  bool bVar1;
  System_Func_TSource__bool__o *predicate;
  
                    /* try { // try from 033076cc to 034076db has its CatchHandler @ 033077d4 */
  if ((DAT_04566e4f & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<int>__);
                    /* try { // try from 033076e0 to 034076e7 has its CatchHandler @ 033077cc */
    FUN_01bab630(&System_Func<int,_bool>_TypeInfo);
                    /* try { // try from 033076f4 to 03407703 has its CatchHandler @ 033077d8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Count__);
    __this = (NLPJLHOEAOE_o *)FUN_01bab630(&Method_NLPJLHOEAOE_EGDBNPAGEAM__);
                    /* try { // try from 03307708 to 0340770f has its CatchHandler @ 033077d0 */
    DAT_04566e4f = 1;
  }
  if (FGPFLEGPNNE != (System_Collections_Generic_List_int__o *)0x0) {
    if ((FGPFLEGPNNE->fields)._size != 0) {
                    /* try { // try from 0330771c to 0340772b has its CatchHandler @ 033077f0 */
      predicate = (System_Func_TSource__bool__o *)
                  thunk_FUN_01bda818(System_Func<int,_bool>_TypeInfo);
      System_Func<int,_bool>___ctor();
      bVar1 = System_Linq_Enumerable__Any<int>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)FGPFLEGPNNE,predicate,
                         Method_System_Linq_Enumerable_Any<int>__);
      return bVar1;
    }
                    /* try { // try from 03307770 to 0340778b has its CatchHandler @ 033077e0 */
    return true;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

