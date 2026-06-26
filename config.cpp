class CfgPatches
{
	class ZF4_scope
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class ItemOptics;
	class ItemOptics_Base;
	class PUScopeOptic;
	class ZF4_Scope: PUScopeOptic
	{
		scope=2;
		displayName="ZF4 Scope";
		descriptionShort="German WW2 optic";
		model="zf4\data\zf4.p3d";
		debug_ItemCategory=3;
		animClass="Binoculars";
		rotationFlags=16;
		reversed=0;
		weight=800;
		itemSize[]={3,1};
		inventorySlot[]=
		{
			"weaponOpticsMosin"
		};
		simulation="itemoptics";
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"zf4\data\zf4_tex__co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"zf4\data\zf4.rvmat"
		};
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa",
								"zf4\data\zf4.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",
								"zf4\data\zf4.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa",
								"zf4\data\zf4.rvmat"
							}
						}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			opticsDisablePeripherialVision=0.67000002;
			opticsFlare=1;
			opticsPPEffects[]=
			{
				"OpticsCHAbera3",
				"OpticsBlur1"
			};
			opticsZoomMin="0.3926/4";
			opticsZoomMax="0.3926/4";
			opticsZoomInit="0.3926/4";
			distanceZoomMin=100;
			distanceZoomMax=1300;
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0.5,0.5,0.34999999,0.050000001};
			PPLensProperties[]={0.5,0.15000001,0,0};
			PPBlurProperties=0.60000002;
		};
	};
};

class CfgNonAIVehicles 
{
	class ProxyAttachment;
	class ProxyOptic_ZF4: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponOpticsMosin";
		model="zf4\data\zf4.p3d";
	};
};
