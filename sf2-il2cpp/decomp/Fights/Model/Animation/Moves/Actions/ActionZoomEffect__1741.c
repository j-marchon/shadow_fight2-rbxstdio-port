// Original name: Nekki.SF2.Core.Fights.Model.Animation.Moves.Actions.ActionZoomEffect  (obfuscated MCIEPLBJLKN)
// TypeDefIndex 1741
// Namespace: 
// public class ActionZoomEffect : ActionAnimation
// Fields:
//   private GameUtils.FNHCJBGGHLH BFLPNKEHKCM; // 0x48

// ===== public GameUtils.FNHCJBGGHLH NGLBMHJFNEM()  [RVA 0x31DC670]
// ActionZoomEffect$$NGLBMHJFNEM @ RVA 0x31DC670

GameUtils_FNHCJBGGHLH_o * ActionZoomEffect__NGLBMHJFNEM(ActionZoomEffect_o *__this,MethodInfo *method)

{
  return (__this->fields).BFLPNKEHKCM;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x31DC678]
// ActionZoomEffect$$.ctor @ RVA 0x31DC678

void ActionZoomEffect___ctor(ActionZoomEffect_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  GameUtils_FNHCJBGGHLH_o *__this_00;
  GameUtils_FNHCJBGGHLH_o **ppMVar1;
  
  if ((DAT_04566d1c & 1) == 0) {
    FUN_01bab630(&GameUtils_FNHCJBGGHLH_TypeInfo);
    DAT_04566d1c = 1;
  }
  __this_00 = (GameUtils_FNHCJBGGHLH_o *)thunk_FUN_01bda818(GameUtils_FNHCJBGGHLH_TypeInfo);
  GameUtils_FNHCJBGGHLH___ctor(__this_00,(MethodInfo *)0x0);
  ppMVar1 = &(__this->fields).BFLPNKEHKCM;
  *ppMVar1 = __this_00;
  thunk_FUN_01c20e04(ppMVar1,__this_00);
  ActionAnimation___ctor((ActionAnimation_o *)__this,0xb,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x032dc704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._5_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._5_HNIHOIAMDPC.method);
  return;
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x31DC708]
// ActionZoomEffect$$HNIHOIAMDPC @ RVA 0x31DC708

void ActionZoomEffect__HNIHOIAMDPC
               (ActionZoomEffect_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  GameUtils_FNHCJBGGHLH_o *pMVar4;
  float fVar5;
  
  if ((DAT_04566d1d & 1) == 0) {
    FUN_01bab630(&StringLiteral_15316/*"ZoomScale"*/);
    FUN_01bab630(&StringLiteral_5640/*"EffectTime"*/);
    DAT_04566d1d = 1;
  }
  ActionAnimation__HNIHOIAMDPC((ActionAnimation_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pMVar4 = (__this->fields).BFLPNKEHKCM;
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_5640/*"EffectTime"*/,(MethodInfo *)0x0);
      iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,0,(MethodInfo *)0x0);
      if (pMVar4 != (GameUtils_FNHCJBGGHLH_o *)0x0) {
        (pMVar4->fields).EOOHODKJDHH = iVar1;
        pMVar4 = (__this->fields).BFLPNKEHKCM;
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_15316/*"ZoomScale"*/,(MethodInfo *)0x0);
          fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
          if (pMVar4 != (GameUtils_FNHCJBGGHLH_o *)0x0) {
            (pMVar4->fields).NMBDLKFCIPG = fVar5;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void DPGIIHOJJDE(Model BCKBBGCOMJD)  [RVA 0x31DC7F0]
// ActionZoomEffect$$DPGIIHOJJDE @ RVA 0x31DC7F0

void ActionZoomEffect__DPGIIHOJJDE(ActionZoomEffect_o *__this,Model_o *BCKBBGCOMJD,MethodInfo *method)

{
  if (BCKBBGCOMJD != (Model_o *)0x0) {
    Model__AHNAGGGOLBK(BCKBBGCOMJD,__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

