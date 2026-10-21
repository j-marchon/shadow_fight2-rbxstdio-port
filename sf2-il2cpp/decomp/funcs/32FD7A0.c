// HHLPEJCDCBH$$BDHAMOEKNNK @ RVA 0x32FD7A0

void HHLPEJCDCBH__BDHAMOEKNNK(HHLPEJCDCBH_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  Il2CppObject *pIVar2;
  UnityEngine_Vector3_array *pUVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_045676ff & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
                    /* try { // try from 033fd7cc to 034fd7d3 has its CatchHandler @ 033fd954 */
    DAT_045676ff = 1;
  }
  pUVar3 = (__this->fields).GNIBJEOJOBO;
  if (pUVar3 != (UnityEngine_Vector3_array *)0x0) {
                    /* try { // try from 033fd7d8 to 034fd7df has its CatchHandler @ 033fd958 */
    if (0 < (int)pUVar3->max_length) {
                    /* try { // try from 033fd7e4 to 034fd7ef has its CatchHandler @ 033fd94c */
      uVar4 = 0;
      lVar5 = 0;
      do {
        __this_00 = (__this->fields).ECFOALIBLLO;
                    /* try { // try from 033fd7fc to 034fd803 has its CatchHandler @ 033fd950 */
        if ((((__this_00 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) ||
             (pIVar2 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)__this_00,
                                  (int32_t)uVar4,
                                  Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__),
             pIVar2 == (Il2CppObject *)0x0)) ||
            (pUVar3 = (__this->fields).GNIBJEOJOBO, pUVar3 == (UnityEngine_Vector3_array *)0x0)) ||
           (pIVar2[3].monitor == (void *)0x0)) goto LAB_033fd858;
        uVar1 = (uint)pUVar3->max_length;
                    /* try { // try from 033fd820 to 034fd853 has its CatchHandler @ 033fd964 */
        if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        uVar6 = *(undefined8 *)((long)pIVar2[3].monitor + 0x10);
        uVar4 = uVar4 + 1;
        *(undefined4 *)((long)&pUVar3->m_Items[0].fields.z + lVar5) = 0;
        *(undefined8 *)((long)&pUVar3->m_Items[0].fields.x + lVar5) = uVar6;
        lVar5 = lVar5 + 0xc;
      } while ((long)uVar4 < (long)(int)uVar1);
    }
                    /* try { // try from 033fd854 to 034fd927 has its CatchHandler @ 033fd3c0 */
    return;
  }
LAB_033fd858:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

