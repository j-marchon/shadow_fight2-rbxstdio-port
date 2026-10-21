// AKOMJPINHEN$$EHJAAHEJFEO @ RVA 0x308F3A4

void AKOMJPINHEN__EHJAAHEJFEO(AKOMJPINHEN_o *__this,EKMDOGKFEBJ_o *PDALMPAOAFM,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  if ((DAT_04566083 & 1) == 0) {
                    /* try { // try from 0318f3c4 to 0328f3f7 has its CatchHandler @ 0318f4a4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<EKMDOGKFEBJ>_Remove__);
    DAT_04566083 = 1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).PNNKHCDPPAE;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__Remove
              (__this_00,(Il2CppObject *)PDALMPAOAFM,
               Method_System_Collections_Generic_List<EKMDOGKFEBJ>_Remove__);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0318eda4 with catch @ 0318f3f8
                       try { // try from 0318f3f8 to 0328f417 has its CatchHandler @ 0318e838 */
  FUN_01bab8c8();
}

