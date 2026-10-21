// KLPJOKOFLJD$$LFENGGKOJDO @ RVA 0x34B7AD0

bool KLPJOKOFLJD__LFENGGKOJDO
               (KLPJOKOFLJD_o *__this,System_String_o *NONPLOOOOAG,System_String_o *BBGJDIIFLBC,
               MethodInfo *method)

{
  bool bVar1;
  System_Text_Encoding_o *pSVar2;
  System_String_o *pSVar3;
  System_Byte_array *pSVar4;
  System_Collections_Generic_HashSet_object__o *pSVar5;
  System_Security_Cryptography_HashAlgorithm_o *__this_00;
  
                    /* try { // try from 035b7ad0 to 036b7b03 has its CatchHandler @ 035b789c */
  if ((DAT_045685a0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<byte[]>_Add__);
                    /* try { // try from 035b7b04 to 036b7b07 has its CatchHandler @ 035b7b18 */
                    /* try { // try from 035b7b08 to 036b7b0f has its CatchHandler @ 035b7b1c */
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<byte[]>_Contains__);
                    /* try { // try from 035b7b10 to 036b7b43 has its CatchHandler @ 035b789c */
    DAT_045685a0 = 1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b7aac with catch @ 035b7b14
                        */
  __this_00 = (System_Security_Cryptography_HashAlgorithm_o *)(__this->fields).CCHGABMGBIJ;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b7b04 with catch @ 035b7b18
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b7b08 with catch @ 035b7b1c
                        */
  pSVar2 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b7a60 with catch @ 035b7b20
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b7a3c with catch @ 035b7b24
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b7a2c with catch @ 035b7b28
                        */
  pSVar3 = System_Environment__get_NewLine((MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b7a14 with catch @ 035b7b2c
                        */
  pSVar3 = System_String__Concat(NONPLOOOOAG,pSVar3,BBGJDIIFLBC,(MethodInfo *)0x0);
  if (pSVar2 != (System_Text_Encoding_o *)0x0) {
                    /* try { // try from 035b7b44 to 036b7b47 has its CatchHandler @ 035b7b68 */
                    /* try { // try from 035b7b48 to 036b7b6f has its CatchHandler @ 035b789c */
    pSVar4 = (System_Byte_array *)
             (*(pSVar2->klass->vtable)._19_GetBytes.methodPtr)
                       (pSVar2,pSVar3,(pSVar2->klass->vtable)._19_GetBytes.method);
    if (__this_00 != (System_Security_Cryptography_HashAlgorithm_o *)0x0) {
                    /* catch() { ... } // from try @ 035b7b44 with catch @ 035b7b68 */
      pSVar4 = System_Security_Cryptography_HashAlgorithm__ComputeHash
                         (__this_00,pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 035b7b70 to 036b7b77 has its CatchHandler @ 035b7b8c */
      pSVar5 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).BOFADCNNCPO;
      if (pSVar5 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* try { // try from 035b7b78 to 036b7b83 has its CatchHandler @ 035b789c */
                    /* try { // try from 035b7b84 to 036b7b8b has its CatchHandler @ 035b7b8c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035b7b70 with catch @ 035b7b8c
                       catch(type#2 @ 00000000) { ... } // from try @ 035b7b84 with catch @ 035b7b8c
                        */
                    /* try { // try from 035b7b90 to 036b7cbf has its CatchHandler @ 035b7b90
                       catch() { ... } // from try @ 035b7b90 with catch @ 035b7b90
                       catch() { ... } // from try @ 035b7d50 with catch @ 035b7b90
                       catch() { ... } // from try @ 035b7dcc with catch @ 035b7b90
                       catch() { ... } // from try @ 035b7dfc with catch @ 035b7b90
                       catch() { ... } // from try @ 035b7e2c with catch @ 035b7b90 */
        bVar1 = System_Collections_Generic_HashSet<object>__Contains
                          (pSVar5,&pSVar4->obj,
                           Method_System_Collections_Generic_HashSet<byte[]>_Contains__);
        if (!bVar1) {
          pSVar5 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).BOFADCNNCPO;
          if (pSVar5 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_035b7bd0;
          System_Collections_Generic_HashSet<object>__Add
                    (pSVar5,&pSVar4->obj,Method_System_Collections_Generic_HashSet<byte[]>_Add__);
        }
        return (bool)(~bVar1 & 1);
      }
    }
  }
LAB_035b7bd0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

