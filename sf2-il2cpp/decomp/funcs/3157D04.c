// HPEENDCCJND$$GGLNDGHIMDJ @ RVA 0x3157D04

double HPEENDCCJND__GGLNDGHIMDJ(HPEENDCCJND_o *__this,int32_t OGPGLGPMEPD,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar1;
  double *pdVar2;
  
                    /* try { // try from 03257d0c to 03357d17 has its CatchHandler @ 0325805c */
                    /* try { // try from 03257d1c to 03357d2b has its CatchHandler @ 03258010 */
  if ((DAT_0456684c & 1) == 0) {
    FUN_01bab630(&double_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<object>_get_Item__);
                    /* try { // try from 03257d3c to 03357d47 has its CatchHandler @ 0325800c */
    DAT_0456684c = 1;
  }
  __this_00 = (__this->fields).EIHCMKCJPJO;
                    /* try { // try from 03257d4c to 03357d5b has its CatchHandler @ 03258004 */
  if ((__this_00 != (System_Collections_Generic_List_object__o *)0x0) &&
     (pIVar1 = System_Collections_Generic_List<object>__get_Item
                         (__this_00,OGPGLGPMEPD + -1,
                          Method_System_Collections_Generic_List<object>_get_Item__),
     pIVar1 != (Il2CppObject *)0x0)) {
                    /* try { // try from 03257d6c to 03357d77 has its CatchHandler @ 03258008 */
                    /* try { // try from 03257d7c to 03357d8b has its CatchHandler @ 03257ffc */
    if ((pIVar1->klass->_1).element_class == (double_TypeInfo->_1).element_class) {
      pdVar2 = (double *)thunk_FUN_01bda96c();
      return *pdVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01babc64();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

