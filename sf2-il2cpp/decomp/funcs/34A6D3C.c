// SFButton$$AddEventListener @ RVA 0x34A6D3C

int32_t SFButton__AddEventListener
                  (SFButton_o *__this,int32_t KGLJICLJHEL,System_Action_object__o *IELDNEAAPBE,
                  MethodInfo *method)

{
  int32_t iVar1;
  OMLLDCIMLBB_object__o *__this_00;
  
                    /* catch() { ... } // from try @ 035a6d20 with catch @ 035a6d3c
                       catch() { ... } // from try @ 035a6d34 with catch @ 035a6d3c */
                    /* try { // try from 035a6d58 to 036a6dfb has its CatchHandler @ 035a6d58
                       catch() { ... } // from try @ 035a6d58 with catch @ 035a6d58
                       catch() { ... } // from try @ 035a6e20 with catch @ 035a6d58
                       catch() { ... } // from try @ 035a6e54 with catch @ 035a6d58
                       catch() { ... } // from try @ 035a6e7c with catch @ 035a6d58
                       catch() { ... } // from try @ 035a6eac with catch @ 035a6d58 */
  if ((DAT_045685cc & 1) == 0) {
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_AddEventListener__);
    DAT_045685cc = 1;
  }
  __this_00 = (__this->fields).CDMKOMBJFLG;
  if (__this_00 != (OMLLDCIMLBB_object__o *)0x0) {
    iVar1 = OMLLDCIMLBB<object>__AddEventListener
                      (__this_00,KGLJICLJHEL,(System_Action_T__o *)IELDNEAAPBE,
                       Method_OMLLDCIMLBB<object>_AddEventListener__);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

