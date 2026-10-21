// ADAHHFAPLLM$$DDIBCCLLJLP @ RVA 0x30C7DB4

System_String_o * ADAHHFAPLLM__DDIBCCLLJLP(MethodInfo *method)

{
  System_String_o *pSVar1;
  
                    /* catch() { ... } // from try @ 031c7bb8 with catch @ 031c7dc0 */
  if ((DAT_045662b9 & 1) == 0) {
                    /* catch() { ... } // from try @ 031c7c4c with catch @ 031c7dd0
                       catch() { ... } // from try @ 031c7d04 with catch @ 031c7dd0 */
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    DAT_045662b9 = 1;
  }
                    /* try { // try from 031c7dec to 032c7def has its CatchHandler @ 031c7dfc */
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 031c7dec with catch @ 031c7dfc */
  pSVar1 = UnityEngine_Application__get_productName((MethodInfo *)0x0);
  return pSVar1;
}

