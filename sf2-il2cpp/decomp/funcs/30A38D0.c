// IGFGDDANEPE$$DCIBJNCLIKP @ RVA 0x30A38D0

void IGFGDDANEPE__DCIBJNCLIKP(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar1;
  Il2CppObject *item;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlNode_o *pSVar3;
  int index;
  
  if ((DAT_0456615c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Item__);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_5703);
                    /* try { // try from 031a3934 to 032a393b has its CatchHandler @ 031a3994 */
    FUN_01bab630(&StringLiteral_10213);
    DAT_0456615c = 1;
  }
  pSVar1 = (__this->fields).PAPANCDPPIF;
  if (pSVar1 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* try { // try from 031a3954 to 032a3963 has its CatchHandler @ 031a3990 */
                    /* try { // try from 031a3964 to 032a3987 has its CatchHandler @ 031a3898 */
    index = 0;
    do {
      while( true ) {
        if ((pSVar1->fields)._size <= index) {
          return;
        }
                    /* try { // try from 031a3988 to 032a398b has its CatchHandler @ 031a398c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a3988 with catch @ 031a398c
                       try { // try from 031a398c to 032a39ab has its CatchHandler @ 031a3898 */
        item = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,index,
                          Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Item__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a3954 with catch @ 031a3990
                        */
        if (item == (Il2CppObject *)0x0) goto LAB_031a3a1c;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a3934 with catch @ 031a3994
                        */
        if (*(int *)((long)&item[0xd].klass + 4) != 0) break;
        pSVar1 = (__this->fields).PAPANCDPPIF;
        if (pSVar1 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) goto LAB_031a3a1c;
                    /* try { // try from 031a39ac to 032a39af has its CatchHandler @ 031a39d0 */
                    /* try { // try from 031a39b0 to 032a39d7 has its CatchHandler @ 031a3898 */
        System_Collections_Generic_List<object>__Remove
                  ((System_Collections_Generic_List_object__o *)pSVar1,item,
                   Method_System_Collections_Generic_List<HEFOANCOHDC>_Remove__);
        pSVar2 = (__this->fields).DMLGJFCNNJF;
        if (pSVar2 == (System_Xml_XmlNode_o *)0x0) goto LAB_031a3a1c;
        pSVar2 = (System_Xml_XmlNode_o *)
                 (*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                           (pSVar2,StringLiteral_5703,(pSVar2->klass->vtable)._51_get_Item.method);
                    /* catch() { ... } // from try @ 031a39ac with catch @ 031a39d0 */
                    /* try { // try from 031a39d8 to 032a39df has its CatchHandler @ 031a39f4 */
                    /* try { // try from 031a39e0 to 032a39eb has its CatchHandler @ 031a3898 */
        pSVar3 = EIABCPKDEBD__MHJPHEMBOLK
                           (pSVar2,StringLiteral_10213,StringLiteral_9327,
                            (System_String_o *)item[4].klass,(MethodInfo *)0x0);
        if (pSVar2 == (System_Xml_XmlNode_o *)0x0) goto LAB_031a3a1c;
                    /* try { // try from 031a39ec to 032a39f3 has its CatchHandler @ 031a39f4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031a39d8 with catch @ 031a39f4
                       catch(type#2 @ 00000000) { ... } // from try @ 031a39ec with catch @ 031a39f4
                        */
                    /* try { // try from 031a39f8 to 032a3a9b has its CatchHandler @ 031a39f8
                       catch() { ... } // from try @ 031a39f8 with catch @ 031a39f8
                       catch() { ... } // from try @ 031a3ad0 with catch @ 031a39f8
                       catch() { ... } // from try @ 031a3afc with catch @ 031a39f8
                       catch() { ... } // from try @ 031a3b20 with catch @ 031a39f8
                       catch() { ... } // from try @ 031a3b50 with catch @ 031a39f8 */
        (*(pSVar2->klass->vtable)._25_RemoveChild.methodPtr)
                  (pSVar2,pSVar3,(pSVar2->klass->vtable)._25_RemoveChild.method);
        pSVar1 = (__this->fields).PAPANCDPPIF;
        if (pSVar1 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) goto LAB_031a3a1c;
      }
      pSVar1 = (__this->fields).PAPANCDPPIF;
      index = index + 1;
    } while (pSVar1 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0);
  }
LAB_031a3a1c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

