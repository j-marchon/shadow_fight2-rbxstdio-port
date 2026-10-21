// CGALNIOABHK$$OFNGFKIGDOJ @ RVA 0x3447360

void CGALNIOABHK__OFNGFKIGDOJ
               (ECENNHNBAME_HJPFANEPGJF_o *DMGLMCBIAGL,System_Xml_XmlNode_o *AHDGNOJPPIB,
               System_Collections_Generic_List_XmlNode__o *EDMMHCAGPON,MethodInfo *method)

{
  ECENNHNBAME_HJPFANEPGJF_FFGJMEOGPEA_o *pEVar2;
  Il2CppObject *pIVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ECENNHNBAME_HJPFANEPGJF_FFGJMEOGPEA_o **ppEVar4;
  int index;
  undefined1 auVar5 [16];
  long lVar1;
  
  if ((DAT_0456824f & 1) == 0) {
    FUN_01bab630(&CGALNIOABHK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Item__);
    FUN_01bab630(&StringLiteral_11897);
    DAT_0456824f = 1;
  }
  if (DMGLMCBIAGL != (ECENNHNBAME_HJPFANEPGJF_o *)0x0) {
    ppEVar4 = &(DMGLMCBIAGL->fields).GCIHJDANIJJ;
    if ((*ppEVar4 != (ECENNHNBAME_HJPFANEPGJF_FFGJMEOGPEA_o *)0x0) &&
       (((*ppEVar4)->fields).OKONAOJIODE = false, AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0)) {
      auVar5 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                         (AHDGNOJPPIB,StringLiteral_11897,
                          (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
      lVar1 = auVar5._0_8_;
      if (lVar1 == 0) {
        if (EDMMHCAGPON != (System_Collections_Generic_List_XmlNode__o *)0x0) {
          if ((EDMMHCAGPON->fields)._size < 1) {
            return;
          }
          index = 0;
          while (pIVar3 = System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)EDMMHCAGPON,index,
                                     Method_System_Collections_Generic_List<XmlNode>_get_Item__),
                pIVar3 != (Il2CppObject *)0x0) {
            auVar5 = (*pIVar3->klass->vtable[0x33].methodPtr)
                               (pIVar3,StringLiteral_11897,pIVar3->klass->vtable[0x33].method);
            lVar1 = auVar5._0_8_;
            if (lVar1 != 0) {
              if ((CGALNIOABHK_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
                auVar5._8_8_ = extraout_x1_00;
                auVar5._0_8_ = lVar1;
              }
              goto LAB_03547418;
            }
            index = index + 1;
            if ((EDMMHCAGPON->fields)._size <= index) {
              return;
            }
          }
        }
      }
      else {
        if ((CGALNIOABHK_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          auVar5._8_8_ = extraout_x1;
          auVar5._0_8_ = lVar1;
        }
LAB_03547418:
        pEVar2 = CGALNIOABHK__COCMBLDPDIM(auVar5._0_8_,auVar5._8_8_);
        *ppEVar4 = pEVar2;
        thunk_FUN_01c20e04(ppEVar4,pEVar2);
        if (*ppEVar4 != (ECENNHNBAME_HJPFANEPGJF_FFGJMEOGPEA_o *)0x0) {
          ((*ppEVar4)->fields).OKONAOJIODE = true;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

