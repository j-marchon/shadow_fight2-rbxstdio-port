// TypeDefIndex 2766
// Namespace: 
// public class GameUtils.CEMCIPLHMKD
// Fields:
//   public string INLHCNPCBFP; // 0x10
//   public string IDMFMJHDAFI; // 0x18
//   public float LMJDLCKDFLD; // 0x20
//   public float HGMJNJHLJLH; // 0x24
//   public float MMDEBECMCJE; // 0x28

// ===== public void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x340EA10]
// GameUtils.CEMCIPLHMKD$$HNIHOIAMDPC @ RVA 0x340EA10

void GameUtils_CEMCIPLHMKD__HNIHOIAMDPC
               (GameUtils_CEMCIPLHMKD_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,
               MethodInfo *method)

{
  long *plVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  float fVar5;
  
  if ((DAT_04568067 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9311/*"NPivot"*/);
    FUN_01bab630(&StringLiteral_8901/*"MaxWidthDelta"*/);
    FUN_01bab630(&StringLiteral_8900/*"MaxWidth"*/);
    FUN_01bab630(&StringLiteral_3774/*"CameraNode"*/);
    FUN_01bab630(&StringLiteral_3696/*"COM"*/);
    FUN_01bab630(&StringLiteral_3490/*"BindingLength"*/);
    FUN_01bab630(&StringLiteral_3775/*"CameraSettings"*/);
    FUN_01bab630(&StringLiteral_3491/*"BindingNode"*/);
    DAT_04568067 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    plVar1 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                               (AHDGNOJPPIB,StringLiteral_3775/*"CameraSettings"*/,
                                (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    if (plVar1 != (long *)0x0) {
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_3774/*"CameraNode"*/,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_3696/*"COM"*/,(MethodInfo *)0x0);
        (__this->fields).INLHCNPCBFP = pSVar4;
        thunk_FUN_01c20e04();
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_3491/*"BindingNode"*/,(MethodInfo *)0x0);
          pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_9311/*"NPivot"*/,(MethodInfo *)0x0);
          (__this->fields).IDMFMJHDAFI = pSVar4;
          thunk_FUN_01c20e04();
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_3490/*"BindingLength"*/,(MethodInfo *)0x0);
            fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
            (__this->fields).LMJDLCKDFLD = fVar5;
            pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
            if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar2,StringLiteral_8900/*"MaxWidth"*/,(MethodInfo *)0x0);
              fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,-1.0,(MethodInfo *)0x0);
              (__this->fields).MMDEBECMCJE = fVar5;
              pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                       (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
              if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar2,StringLiteral_8901/*"MaxWidthDelta"*/,(MethodInfo *)0x0);
                fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
                (__this->fields).HGMJNJHLJLH = fVar5;
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x33FDDA0]
// GameUtils.CEMCIPLHMKD$$.ctor @ RVA 0x33FDDA0

void GameUtils_CEMCIPLHMKD___ctor(GameUtils_CEMCIPLHMKD_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

