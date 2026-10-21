// IKGDKGBHEFN$$IKHEOEJKGDI @ RVA 0x3020570

void IKGDKGBHEFN__IKHEOEJKGDI
               (IKGDKGBHEFN_o *__this,Nekki_SF2_GUI_TableViewCell_o *HBHBCBJANIC,MethodInfo *method)

{
  System_Collections_Generic_LinkedList_TableViewCell__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
                    /* try { // try from 03120578 to 0322057f has its CatchHandler @ 03120b20 */
                    /* try { // try from 03120588 to 03220593 has its CatchHandler @ 03120b10 */
  if ((DAT_04565c40 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_LinkedList<TableViewCell>_AddLast__);
    DAT_04565c40 = 1;
  }
  __this_00 = (__this->fields).LNKABGKKHGB;
                    /* try { // try from 031205a8 to 032205bf has its CatchHandler @ 03120bac */
                    /* try { // try from 031205c8 to 032205df has its CatchHandler @ 03120ba8 */
  if (((__this_00 != (System_Collections_Generic_LinkedList_TableViewCell__o *)0x0) &&
      (System_Collections_Generic_LinkedList<object>__AddLast
                 ((System_Collections_Generic_LinkedList_T__o *)__this_00,
                  (Il2CppObject *)HBHBCBJANIC,
                  Method_System_Collections_Generic_LinkedList<TableViewCell>_AddLast__),
      HBHBCBJANIC != (Nekki_SF2_GUI_TableViewCell_o *)0x0)) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)HBHBCBJANIC,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

