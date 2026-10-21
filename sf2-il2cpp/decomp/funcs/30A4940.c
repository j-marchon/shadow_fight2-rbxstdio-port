// IGFGDDANEPE$$JMOIFIMNBPM @ RVA 0x30A4940

void IGFGDDANEPE__JMOIFIMNBPM(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar1;
  Il2CppObject *item;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlNode_o *pSVar3;
  int index;
  
  if ((DAT_0456616e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Item__);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_5703);
    FUN_01bab630(&StringLiteral_10213);
    DAT_0456616e = 1;
  }
  pSVar1 = (__this->fields).PAPANCDPPIF;
  if (pSVar1 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
    index = 0;
    do {
      if ((pSVar1->fields)._size <= index) {
        return;
      }
      item = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar1,index,
                        Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Item__);
      if (item == (Il2CppObject *)0x0) break;
      if (*(int *)((long)&item[0xd].klass + 4) != 0) {
        pSVar1 = (__this->fields).PAPANCDPPIF;
        if (pSVar1 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
          System_Collections_Generic_List<object>__Remove
                    ((System_Collections_Generic_List_object__o *)pSVar1,item,
                     Method_System_Collections_Generic_List<HEFOANCOHDC>_Remove__);
          pSVar2 = (__this->fields).DMLGJFCNNJF;
          if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
            pSVar2 = (System_Xml_XmlNode_o *)
                     (*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar2,StringLiteral_5703,
                                (pSVar2->klass->vtable)._51_get_Item.method);
            pSVar3 = EIABCPKDEBD__MHJPHEMBOLK
                               (pSVar2,StringLiteral_10213,StringLiteral_9327,
                                (System_String_o *)item[4].klass,(MethodInfo *)0x0);
            if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031a4a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(pSVar2->klass->vtable)._25_RemoveChild.methodPtr)
                        (pSVar2,pSVar3,(pSVar2->klass->vtable)._25_RemoveChild.method);
              return;
            }
          }
        }
        break;
      }
      pSVar1 = (__this->fields).PAPANCDPPIF;
      index = index + 1;
    } while (pSVar1 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

