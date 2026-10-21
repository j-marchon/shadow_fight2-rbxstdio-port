// GGHCLMEFIGO$$OMFGGNJKKAJ @ RVA 0x33B7128

void GGHCLMEFIGO__OMFGGNJKKAJ(GGHCLMEFIGO_o *__this,IGFGDDANEPE_o *IKKAMAMLIKA,MethodInfo *method)

{
  System_Collections_Generic_List_IGFGDDANEPE__o *pSVar1;
  System_Xml_XmlNode_o *pSVar2;
  long *plVar3;
  
  if ((DAT_04567d79 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_Remove__);
    DAT_04567d79 = 1;
  }
  if (IKKAMAMLIKA == (IGFGDDANEPE_o *)0x0) {
    return;
  }
  pSVar1 = (__this->fields).DPOPJKJLDEE;
  if (pSVar1 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
    System_Collections_Generic_List<object>__Remove
              ((System_Collections_Generic_List_object__o *)pSVar1,(Il2CppObject *)IKKAMAMLIKA,
               Method_System_Collections_Generic_List<IGFGDDANEPE>_Remove__);
    pSVar1 = (__this->fields).PMNIDGNGCCG;
    if (pSVar1 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)pSVar1,(Il2CppObject *)IKKAMAMLIKA,
                 Method_System_Collections_Generic_List<IGFGDDANEPE>_Remove__);
      pSVar1 = (__this->fields).MKPLNDNGHEB;
      if (pSVar1 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
        System_Collections_Generic_List<object>__Remove
                  ((System_Collections_Generic_List_object__o *)pSVar1,(Il2CppObject *)IKKAMAMLIKA,
                   Method_System_Collections_Generic_List<IGFGDDANEPE>_Remove__);
        pSVar1 = (__this->fields).JAKMLPIMLCK;
        if (pSVar1 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
          System_Collections_Generic_List<object>__Remove
                    ((System_Collections_Generic_List_object__o *)pSVar1,(Il2CppObject *)IKKAMAMLIKA
                     ,Method_System_Collections_Generic_List<IGFGDDANEPE>_Remove__);
          pSVar2 = (IKKAMAMLIKA->fields).DMLGJFCNNJF;
          if (pSVar2 == (System_Xml_XmlNode_o *)0x0) {
            return;
          }
          plVar3 = (long *)(*(pSVar2->klass->vtable)._12_get_ParentNode.methodPtr)
                                     (pSVar2,(pSVar2->klass->vtable)._12_get_ParentNode.method);
          if (plVar3 == (long *)0x0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x034b71e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x2c8))
                    (plVar3,(IKKAMAMLIKA->fields).DMLGJFCNNJF,*(undefined8 *)(*plVar3 + 0x2d0));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

