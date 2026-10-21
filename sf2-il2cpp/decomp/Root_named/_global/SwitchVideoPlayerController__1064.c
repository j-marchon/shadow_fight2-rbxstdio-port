// TypeDefIndex 1064
// Namespace: 
// public class SwitchVideoPlayerController : VideoPlayerController
// Fields:
//   private Camera LMGHANCHAEE; // 0x50
//   private SwitchCameraControl PBNOAOOEIGM; // 0x58
//   private int LCPOBNECGJN; // 0x60
//   private int NDINGJMIPDL; // 0x64
//   private Renderer _Quad; // 0x68
//   private Material BAMHJHCPFBC; // 0x70
//   private string POBGAGBLNCJ; // 0x78

// ===== protected override void OIJPFLLDOMM()  [RVA 0x30DBB98]
// SwitchVideoPlayerController$$OIJPFLLDOMM @ RVA 0x30DBB98

void SwitchVideoPlayerController__OIJPFLLDOMM
               (SwitchVideoPlayerController_o *__this,MethodInfo *method)

{
  VideoPlayerController__OIJPFLLDOMM((VideoPlayerController_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override string MNGKKMCBNCN()  [RVA 0x30DBBA0]
// SwitchVideoPlayerController$$MNGKKMCBNCN @ RVA 0x30DBBA0

System_String_o *
SwitchVideoPlayerController__MNGKKMCBNCN(SwitchVideoPlayerController_o *__this,MethodInfo *method)

{
  return (__this->fields).POBGAGBLNCJ;
}


// ===== public void .ctor()  [RVA 0x30DBBA8]
// SwitchVideoPlayerController$$.ctor @ RVA 0x30DBBA8

void SwitchVideoPlayerController___ctor(SwitchVideoPlayerController_o *__this,MethodInfo *method)

{
  VideoPlayerController___ctor((VideoPlayerController_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void Awake()  [RVA 0x30DBBB0]
// SwitchVideoPlayerController$$Awake @ RVA 0x30DBBB0

void SwitchVideoPlayerController__Awake(SwitchVideoPlayerController_o *__this,MethodInfo *method)

{
  UnityEngine_Camera_o *pUVar1;
  UnityEngine_GameObject_o *__this_00;
  SwitchCameraControl_o *pSVar2;
  SwitchVideoPlayerController_o **ppSVar3;
  MethodInfo *extraout_x1;
  SwitchCameraControl_o **ppSVar4;
  
  if ((DAT_04566358 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<SwitchCameraControl>__);
    DAT_04566358 = 1;
    method = extraout_x1;
  }
  if (DAT_045663a6 == '\0') {
    FUN_01bab630(&VideoPlayerController_TypeInfo,method);
    DAT_045663a6 = '\x01';
  }
  VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField =
       (VideoPlayerController_o *)__this;
  thunk_FUN_01c20e04(VideoPlayerController_TypeInfo->static_fields,__this);
  pUVar1 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
  (__this->fields).LMGHANCHAEE = pUVar1;
  thunk_FUN_01c20e04();
  pUVar1 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
  if ((pUVar1 != (UnityEngine_Camera_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    pSVar2 = (SwitchCameraControl_o *)
             UnityEngine_GameObject__AddComponent<object>
                       (__this_00,Method_UnityEngine_GameObject_AddComponent<SwitchCameraControl>__)
    ;
    ppSVar4 = &(__this->fields).PBNOAOOEIGM;
    *ppSVar4 = pSVar2;
    thunk_FUN_01c20e04(ppSVar4,pSVar2);
    if (*ppSVar4 != (SwitchCameraControl_o *)0x0) {
      ppSVar3 = &((*ppSVar4)->fields)._controller;
      *ppSVar3 = __this;
      thunk_FUN_01c20e04(ppSVar3,__this);
      pUVar1 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Camera_o *)0x0) {
        UnityEngine_Camera__set_backgroundColor
                  (pUVar1,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void Update()  [RVA 0x30DBCB8]
// SwitchVideoPlayerController$$Update @ RVA 0x30DBCB8

void SwitchVideoPlayerController__Update(SwitchVideoPlayerController_o *__this,MethodInfo *method)

{
  VideoPlayerController__Update((VideoPlayerController_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void Play(string CKBGIKEFOMH, Action MFEAFDJABBN)  [RVA 0x30DBCC0]
// SwitchVideoPlayerController$$Play @ RVA 0x30DBCC0

void SwitchVideoPlayerController__Play
               (SwitchVideoPlayerController_o *__this,System_String_o *CKBGIKEFOMH,
               System_Action_o *MFEAFDJABBN,MethodInfo *method)

{
  VideoPlayerController__Play
            ((VideoPlayerController_o *)__this,CKBGIKEFOMH,MFEAFDJABBN,(MethodInfo *)0x0);
  return;
}


// ===== protected override bool CJOHDGBNFBO()  [RVA 0x30DBCC8]
// SwitchVideoPlayerController$$CJOHDGBNFBO @ RVA 0x30DBCC8

bool SwitchVideoPlayerController__CJOHDGBNFBO
               (SwitchVideoPlayerController_o *__this,MethodInfo *method)

{
  return true;
}


// ===== private void AGOBJGGONDG(int BBLGPELGONI)  [RVA 0x30DBCD0]
// SwitchVideoPlayerController$$AGOBJGGONDG @ RVA 0x30DBCD0

void SwitchVideoPlayerController__AGOBJGGONDG
               (SwitchVideoPlayerController_o *__this,int32_t BBLGPELGONI,MethodInfo *method)

{
  return;
}


// ===== protected override void OnDestroy()  [RVA 0x30DBCD4]
// SwitchVideoPlayerController$$OnDestroy @ RVA 0x30DBCD4

void SwitchVideoPlayerController__OnDestroy
               (SwitchVideoPlayerController_o *__this,MethodInfo *method)

{
  VideoPlayerController__OnDestroy((VideoPlayerController_o *)__this,(MethodInfo *)0x0);
  Util__JODGPLBHHIA((UnityEngine_Component_o *)(__this->fields).PBNOAOOEIGM,false,(MethodInfo *)0x0)
  ;
  return;
}


// ===== public void PreRender()  [RVA 0x30DBCF8]
// SwitchVideoPlayerController$$PreRender @ RVA 0x30DBCF8

void SwitchVideoPlayerController__PreRender
               (SwitchVideoPlayerController_o *__this,MethodInfo *method)

{
  return;
}

