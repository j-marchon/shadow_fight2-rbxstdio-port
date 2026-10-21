// GCOLFANNEMF$$.ctor @ RVA 0x323491C

void GCOLFANNEMF___ctor(GCOLFANNEMF_o *__this,int32_t FMHAMFNJHDI,
                       System_Collections_Generic_List_BECIPDJBAOG__o *KJADEEFANAL,
                       MethodInfo *method)

{
  System_Collections_Generic_List_BECIPDJBAOG__o **ppSVar1;
  
                    /* try { // try from 03334924 to 0343492f has its CatchHandler @ 03334a38 */
  KFHIPIPCOHK___ctor((KFHIPIPCOHK_o *)__this,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields).FCKCGNHILFE;
  *ppSVar1 = KJADEEFANAL;
                    /* try { // try from 0333493c to 03434943 has its CatchHandler @ 03334a24 */
  (__this->fields).ANILPHJPHND = FMHAMFNJHDI;
                    /* try { // try from 03334948 to 03434953 has its CatchHandler @ 03334a28 */
  thunk_FUN_01c20e04(ppSVar1,KJADEEFANAL);
  return;
}

